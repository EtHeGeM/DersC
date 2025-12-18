# Module 06: Pointers & Memory Model

## Concepts
- Addresses, indirection, dereferencing
- Pointer arithmetic vs iterator traversal
- Ownership vs observation; `nullptr`
- Undefined behavior scenarios (dangling, double free)

## Why it matters
Memory bugs are costly. Understanding pointer semantics enables safe low-level work, interoperability with C APIs, and effective debugging of crashes and leaks.

## Common pitfalls
- Using uninitialized pointers
- Pointer arithmetic beyond bounds
- Forgetting to `delete` memory allocated with `new`
- Misaligned assumptions about object lifetimes

## Micro-lab (10–20 minutes)
Inspect `src/pointers.cpp`, step through with a debugger, and observe address changes. Add a deliberate bounds check and see how ASAN responds when removed.

## Exercises
1. [easy] Implement a function that counts non-null pointers in an array.
2. [easy] Replace raw pointer traversal with iterators and compare clarity.
3. [medium] Implement a manual dynamic array with `new`/`delete[]` and bounds checks.
4. [medium] Explore pointer aliasing by writing a function that mutates through two pointers and document the outcome.
5. [hard] Write a small arena allocator that serves fixed-size blocks.
