# Atomicity, time, arithmetic and replay

A committed transaction is atomic; failure is not partial success. Consuming the same active contract twice cannot normally commit both transactions. Nonconsuming choices do not necessarily contend on that contract. Separate ledger correctness from application retry, stale-state, liveness and business replay issues.

| Class | Review question | Confirmation / refutation |
|---|---|---|
| T1 | Are deadline semantics compatible with ledger time and retries? | Record time model and intended boundary; show an economically meaningful discrepancy. `getTime` plus a comparison is a normal pattern. |
| T2 | Are contention failures handled without lost business state? | Trace the caller, refreshed inputs and idempotency. Do not claim a double spend merely from concurrent submissions. |
| T3 | Can arithmetic violate conservation or availability? | Check bounds, zero denominators, scale, rounding and dust allocation on concrete values. Distinguish Decimal from arbitrary Numeric scales. |
| T4 | Can a forbidden signed/zero/oversized amount reach a contract? | Inspect all creation paths, ensure and upstream guards. Absence of ensure is not sufficient; signed balances may be intentional. |
| T5 | Can automation loop on stale state or duplicate effects? | Check the actual trigger/client API version, pending operations, refresh and error handling. Do not prescribe one legacy emitCommands signature universally. |
| T6 | Is business replay prevention confused with command deduplication? | Establish dedup change identity, configured duration, caller-controlled IDs and durable consumed state. Do not assume a universal five-minute default. |

For settlement or fees, state the invariant algebraically and test its boundary inputs. Include both a successful normal path and the proposed adversarial path. Treat off-ledger side effects separately from transaction atomicity.
