# Module 02: Types & Operators

## Concepts
- Fundamental types, signedness, and fixed-width integers
- Implicit vs explicit conversions; `static_cast`
- Arithmetic, relational, and logical operators
- Operator precedence and short-circuiting
- Initialization styles: brace vs paren vs equals

## Why it matters
Correctness depends on predictable types and conversions. Operator behavior affects overflow, precision, and readability, influencing safety-critical systems and high-performance code alike.

## Common pitfalls
- Integer overflow and narrowing conversions
- Mixing signed/unsigned in comparisons
- Assuming floating-point equality works without tolerance
- Forgetting operator precedence and missing parentheses

## Micro-lab (10–20 minutes)
Inspect `src/types.cpp` and add log statements showing sizes and ranges of common types on your platform. Run the demo and observe differences between signed/unsigned arithmetic.

## Exercises
1. [easy] Add a function that safely divides two integers and returns `std::optional<int>` when division by zero occurs.
2. [easy] Implement a clamp function for integers using `std::clamp` and compare with manual bounds checks.
3. [medium] Add a small benchmark comparing pre-increment vs post-increment in a loop (use `volatile`).
4. [medium] Demonstrate floating-point rounding errors with `double` vs `float` and propose mitigations.
5. [hard] Implement a fixed-point type for cents and overload arithmetic operators with proper overflow checks.
