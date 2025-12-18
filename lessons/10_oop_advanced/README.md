# Module 10: OOP Advanced (Inheritance, Polymorphism)

## Concepts
- Inheritance hierarchies and interface classes
- Virtual functions, overriding, and dynamic dispatch
- Abstract base classes and pure virtual methods
- The cost of polymorphism vs alternatives (variants, templates)

## Why it matters
Polymorphism enables extensibility but adds complexity and cost. Thoughtful design keeps hierarchies small, testable, and substitution-safe.

## Common pitfalls
- Missing virtual destructors in base classes
- Object slicing when passing by value
- Overusing inheritance instead of composition
- Forgetting `override` specifier

## Micro-lab (10–20 minutes)
Run the payment processor hierarchy in `src/polymorphism.cpp`. Add a new processor type and observe virtual dispatch in action.

## Exercises
1. [easy] Add a `PayPalProcessor` implementing the payment interface.
2. [easy] Write a function that accepts a `PaymentProcessor &` and logs the dynamic type using `typeid`.
3. [medium] Introduce a mock processor for testing that records calls.
4. [medium] Add error handling to `process` and propagate via exceptions or status codes.
5. [hard] Replace runtime polymorphism with a type-erased or variant-based approach and compare.
