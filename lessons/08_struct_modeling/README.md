# Module 08: Structs & Modeling

## Concepts
- Plain-old-data structs vs classes
- Member functions, invariants, and encapsulation when appropriate
- Aggregates, designated initialization, and comparison defaults
- Modeling real-world concepts with small types

## Why it matters
Well-modeled data types reduce bugs and make APIs self-documenting. Small, focused structs improve maintainability and testability.

## Common pitfalls
- Leaving structs in invalid states after construction
- Exposing mutable members without invariants
- Forgetting to define equality or ordering when needed
- Using large structs by value in tight loops without considering cost

## Micro-lab (10–20 minutes)
Model a `Point` and `Rectangle` in `src/model.cpp`. Add a function computing area and test overlap detection. Print the results in the demo.

## Exercises
1. [easy] Add a `Circle` struct with radius validation and area computation.
2. [easy] Provide equality operators for `Point`.
3. [medium] Implement `Rectangle::intersects` and test edge cases.
4. [medium] Introduce a `Tag` type representing categories with string conversion helpers.
5. [hard] Model a small immutable configuration struct with builder-like helper functions.
