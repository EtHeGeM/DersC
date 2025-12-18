# Memory Model Primer

- **Object lifetime:** begins at construction, ends at destruction; accessing outside lifetime is undefined behavior.
- **Storage duration:** automatic (stack), static, dynamic. Understand initialization rules for each.
- **Aliasing:** multiple pointers/references to the same object can cause data races if not synchronized.
- **Ownership:** exactly one owner for dynamically allocated objects (`std::unique_ptr`); shared ownership via `std::shared_ptr` only when required.
- **Const correctness:** `const` expresses immutability intent and unlocks compiler optimizations.
- **Alignment:** structures may be padded; use `sizeof` and `alignof` to explore.
- **Concurrency and atomics:** out of scope for early modules, but know that data races are UB.
