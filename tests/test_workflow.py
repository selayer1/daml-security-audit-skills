"""End-to-end invariants for the offline workflow; no Daml SDK needed."""
import importlib.util
import json
from pathlib import Path
import subprocess
import sys
import tempfile
import unittest

SCRIPTS = Path(__file__).resolve().parents[1]/'scripts'
sys.path.insert(0,str(SCRIPTS))
from common import mask_daml
from scan import scan
from report import validate

SOURCE = '''module Main where
-- controller malicious
{- outer {- fetch fake -} create fake -}
example = "unsafeCast fake"
template Coupon
  with
    owner : Party
    amount : Decimal
  where
    signatory owner
    nonconsuming choice Claim : ContractId Coupon
      controller owner
      do create this
'''

class Workflow(unittest.TestCase):
    def setUp(self):
        self.temp = tempfile.TemporaryDirectory()
        self.addCleanup(self.temp.cleanup)
        self.base = Path(self.temp.name)
        self.project = self.base/'project with spaces'
        self.project.mkdir()
        (self.project/'Main.daml').write_text(SOURCE)
        (self.project/'daml.yaml').write_text('sdk-version: 3.3.0\n')
        self.out = self.base/'scan'

    def test_comments_and_strings_are_not_signals(self):
        summary = scan(self.project,self.out)
        hits = list(map(json.loads,(self.out/'candidates.jsonl').read_text().splitlines()))
        self.assertFalse(any(h['line'] in (2,3,4) for h in hits))
        self.assertTrue(any(h['rule']=='A3' for h in hits))
        self.assertEqual(summary['symbols']['template'],1)
        self.assertEqual(summary['manifests'][0]['sdk_version'],'3.3.0')
        self.assertEqual((self.project/'Main.daml').read_text(),SOURCE)

    def test_symlinks_and_limits_are_visible(self):
        (self.base/'outside.daml').write_text('controller outside')
        (self.project/'Link.daml').symlink_to(self.base/'outside.daml')
        (self.project/'large.daml').write_text('x'*1000)
        summary = scan(self.project,self.out,max_bytes=500)
        self.assertEqual(summary['source_files'],1)
        self.assertEqual(len(summary['skipped']),2)

    def test_excluded_directories_not_scanned(self):
        for name in ['.daml','node_modules','.git']:
            (self.project/name).mkdir()
            (self.project/name/'fake.daml').write_text('controller fake')
        self.assertEqual(scan(self.project,self.out)['source_files'],1)

    def test_no_target_execution_and_bounded_context(self):
        (self.project/'setup.py').write_text('raise RuntimeError("must never execute")')
        result = subprocess.run([sys.executable,str(SCRIPTS/'scan.py'),str(self.project),'--out',str(self.out)],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        result = subprocess.run([sys.executable,str(SCRIPTS/'context.py'),str(self.out),'--topic','authorization','--limit','1','--max-chars','3000'],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        self.assertLessEqual(len(result.stdout),3000)
        self.assertEqual(len(json.loads(result.stdout)['records']),1)
        (self.project/'Main.daml').write_text(SOURCE+'-- change\n')
        result = subprocess.run([sys.executable,str(SCRIPTS/'context.py'),str(self.out),'--topic','authorization'],capture_output=True,text=True)
        self.assertEqual(result.returncode,2)
        self.assertIn('source changed',result.stderr)

    def test_output_cannot_be_in_project_or_overwritten(self):
        with self.assertRaises(ValueError): scan(self.project,self.project/'output')
        scan(self.project,self.out)
        with self.assertRaises(FileExistsError): scan(self.project,self.out)

    def test_verdict_anchors_and_unreviewed_accounting(self):
        summary = scan(self.project,self.out)
        hits = list(map(json.loads,(self.out/'candidates.jsonl').read_text().splitlines()))
        hit = next(h for h in hits if h['rule']=='A3')
        record = dict(id='review-1',candidate_ids=[hit['id']],title='Replay review',status='UNCERTAIN',severity='unknown',file='Main.daml',line=hit['line'],evidence='nonconsuming choice Claim : ContractId Coupon',reasoning='Business interpretation requires confirmation.',refutation='Trace consumed guards and business invariants.',impact='Not established.',validation='Source only; no ledger test executed.')
        _,unreviewed = validate([record],self.out)
        self.assertEqual(unreviewed,summary['candidate_count']-1)
        with self.assertRaises(ValueError): validate([record,dict(record,id='duplicate')],self.out)
        with self.assertRaises(ValueError): validate([dict(record,evidence='invented quote')],self.out)
        with self.assertRaises(ValueError): validate([dict(record,status='CONFIRMED')],self.out)
        findings=self.base/'findings.json'; findings.write_text(json.dumps([record]))
        result=subprocess.run([sys.executable,str(SCRIPTS/'report.py'),str(self.out),str(findings),'--out',str(self.base/'report.md')],capture_output=True,text=True)
        self.assertEqual(result.returncode,0,result.stderr)
        self.assertIn('UNCERTAIN',(self.base/'report.md').read_text())
        (self.project/'Main.daml').write_text(SOURCE+'\n')
        with self.assertRaises(ValueError): validate([record],self.out)

    def test_new_sources_or_changed_manifest_invalidate_report(self):
        scan(self.project,self.out)
        (self.project/'New.daml').write_text('module New where\n')
        with self.assertRaises(ValueError): validate([],self.out)
        (self.project/'New.daml').unlink()
        (self.project/'daml.yaml').write_text('sdk-version: 9.9.9\n')
        with self.assertRaises(ValueError): validate([],self.out)

    def test_no_daml_returns_nonzero(self):
        (self.project/'Main.daml').unlink()
        result=subprocess.run([sys.executable,str(SCRIPTS/'scan.py'),str(self.project),'--out',str(self.out)],capture_output=True,text=True)
        self.assertEqual(result.returncode,3)

    def test_unclosed_lexical_state_reported(self):
        self.assertTrue(mask_daml('{- unclosed')[1])
        self.assertFalse(mask_daml('{- a {- b -} c -}\nvalue = "foo"')[1])

if __name__=='__main__': unittest.main()
