# Module 04: Functions & Modularization

## Concepts
- Function declarations vs definitions; headers and translation units
- Default arguments, overloading, and inlining
- Namespaces for logical grouping
- Compilation model and dependency minimization

## Why it matters
Modular code shortens compile times, clarifies ownership, and enables parallel development. Clear interfaces reduce coupling and regressions.

## Common pitfalls
- Missing declarations leading to implicit int (older code) or build errors
- Circular header includes instead of forward declarations
- Excessive header dependencies causing slow builds
- Overusing `inline` or macros instead of proper interfaces

## Micro-lab (10–20 minutes)
Split a monolithic function into separate translation units. Inspect the generated dependency graph with `cmake --graphviz` and observe how headers drive recompilation.

## Exercises
1. [easy] Add an overloaded `area` function for squares and rectangles.
2. [easy] Add a header-only inline utility and measure whether it simplifies call sites.
3. [medium] Introduce a namespace alias for a utility namespace and update call sites.
4. [medium] Create a separate library target for math helpers and link it into the demo.
5. [hard] Design a lightweight API boundary using forward declarations to hide implementation details.
