# Module 09: OOP Basics (Classes, Ctor/Dtor)

## Concepts
- Class definition, access specifiers, and encapsulation
- Constructors, member initializer lists, destructors
- Rule of Zero and the importance of invariants
- Const-correct member functions

## Why it matters
Correctly constructed objects reduce runtime checks and runtime failures. Clear ownership and encapsulation simplify maintenance and enable refactoring.

## Common pitfalls
- Leaving members uninitialized
- Performing work in destructors that can throw
- Forgetting `const` on accessor functions
- Over-exposing mutable state

## Micro-lab (10–20 minutes)
Review the `BankAccount` class in `src/account.cpp`. Add a withdrawal that can fail gracefully and observe destructor traces when accounts leave scope.

## Exercises
1. [easy] Add input validation to reject negative deposits.
2. [easy] Expose a `const` getter for account owner.
3. [medium] Add a `transfer` member that moves funds between two accounts safely.
4. [medium] Implement comparison operators (`==`, `<`) based on balance then owner.
5. [hard] Add serialization to/from a simple string format and test round-trips.
