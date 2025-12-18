# C++ Style Guide (Course)

- Prefer readability over cleverness; document invariants in comments where non-obvious.
- Use RAII for all ownership; avoid raw `new`/`delete` in exercises unless teaching the concept.
- Pass by reference when mutating, by `const` reference for read-only large objects, and by value for small trivially copyable types.
- Use `enum class`, `using` aliases, and `auto` where type deduction improves clarity.
- Avoid macros except for include guards.
- Enable `-Wall -Wextra -Wpedantic` and treat warnings as errors during grading when possible.
- Prefer `std::unique_ptr`/`std::shared_ptr` over manual memory; prefer `std::vector` to raw arrays unless demonstrating lower-level access.
- Prefer algorithms and ranges over manual loops when they improve correctness and intent.
