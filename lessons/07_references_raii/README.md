# Module 07: References, Dynamic Memory, RAII

## Concepts
- Lvalue/rvalue references and binding rules
- Resource Acquisition Is Initialization (RAII)
- `std::unique_ptr`, `std::shared_ptr`, and custom deleters
- Move semantics vs copy semantics

## Why it matters
RAII keeps resources exception-safe and simplifies cleanup. Correct reference usage avoids dangling pointers and enforces clear ownership models.

## Common pitfalls
- Returning references to local variables
- Misusing `std::shared_ptr` when unique ownership is intended
- Forgetting to mark move-only types as non-copyable
- Writing manual `new`/`delete` instead of RAII wrappers

## Micro-lab (10–20 minutes)
Inspect the `ResourceGuard` type in `src/raii.cpp`. Add logging to its constructor/destructor and observe lifetime when functions return by value.

## Exercises
1. [easy] Create a move-only wrapper around a file descriptor integer.
2. [easy] Implement a function that returns a reference to an element in a `std::vector` and document lifetime assumptions.
3. [medium] Add copy and move constructors to `ResourceGuard` and test semantics.
4. [medium] Use `std::unique_ptr` with a custom deleter for a C API handle.
5. [hard] Implement a small RAII lock guard around a mocked mutex with tests verifying unlocking on exceptions.
