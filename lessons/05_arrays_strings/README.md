# Module 05: Arrays & Strings

## Concepts
- Contiguous storage (`std::array`, `std::vector`, raw arrays)
- `std::string` and `std::string_view`
- Iteration patterns and bounds safety
- Basic algorithms on sequences

## Why it matters
String handling and contiguous data structures dominate real workloads. Understanding ownership and lifetime prevents buffer overruns and dangling references.

## Common pitfalls
- Off-by-one errors when iterating over arrays
- Forgetting null terminators in C-style strings
- Misusing `std::string_view` with ephemeral buffers
- Copying large strings instead of using views or moves

## Micro-lab (10–20 minutes)
Run the provided word-count sample. Add another word and observe how counts change. Print capacity vs size of vectors to see growth strategies.

## Exercises
1. [easy] Write a function that reverses a `std::string` in place.
2. [easy] Convert a CSV line into tokens using `std::string_view` without allocations.
3. [medium] Implement a circular buffer for integers with push/pop APIs.
4. [medium] Write a function that finds the longest common prefix among strings.
5. [hard] Implement a safe substring view that validates UTF-8 boundaries (assume ASCII for starter tests).
