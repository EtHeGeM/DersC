# OOP Notes

- Model invariants inside classes; expose minimal interfaces.
- Use constructors to establish valid states; prefer `explicit` for single-argument constructors.
- Rule of Zero/Three/Five: default when possible, otherwise define or delete copy/move as needed.
- Favor composition over inheritance; use virtual destructors when polymorphism is intended.
- Avoid raw base-class pointers without ownership semantics; prefer references or smart pointers.
- Consider value semantics first; polymorphism is powerful but comes with costs (vtable, allocation).
