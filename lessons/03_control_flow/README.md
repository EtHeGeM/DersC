# Module 03: Control Flow

## Concepts
- Conditionals (`if`, `switch`) and fallthrough semantics
- Loops (`for`, `while`, range-for) and loop invariants
- Early exits with `break`, `continue`, and `return`
- Scoped variables and lifetime inside control structures

## Why it matters
Control flow determines correctness and performance. Structured loops and clear branching make code testable and maintainable, enabling optimizations without regressions.

## Common pitfalls
- Missing `break` in `switch` statements
- Off-by-one errors in loops and range boundaries
- Mutating loop variables unintentionally inside range-based loops
- Complex nested conditionals instead of well-named functions

## Micro-lab (10–20 minutes)
Run the provided FizzBuzz-inspired loop in `src/flow.cpp`. Add logging that highlights when branches trigger. Experiment with `switch` fallthrough and verify with unit tests.

## Exercises
1. [easy] Implement a `max_of_three` function using only `if`/`else`.
2. [easy] Rewrite a `while` loop as a range-based `for` and compare readability.
3. [medium] Implement input validation that retries until a valid integer is read.
4. [medium] Replace a nested conditional with a `switch` that handles enum states.
5. [hard] Write a state machine for a simple protocol with clear transition tests.
