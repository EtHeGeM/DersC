# Module 11: STL (Vector, Map, Set, Algorithms)

## Concepts
- Sequence and associative containers
- Iterators and iterator invalidation rules
- Algorithms (`transform`, `accumulate`, `find_if`, set operations)
- Complexity and memory characteristics

## Why it matters
The STL encodes decades of best practices. Using standard containers and algorithms yields safer, faster, and more portable code than bespoke loops.

## Common pitfalls
- Invalidation when pushing to `vector` while holding iterators
- Forgetting custom comparators for ordered containers
- Assuming `unordered_map` iteration order
- Using algorithms with mismatched iterator categories

## Micro-lab (10–20 minutes)
Run the `analyze_scores` example in `src/stl_examples.cpp`. Add a new student score and observe how averages and sets update. Try `std::erase_if` to filter failing students.

## Exercises
1. [easy] Use `std::transform` to uppercase a list of strings.
2. [easy] Build a frequency map of characters in a string.
3. [medium] Use `std::set_intersection` to find common items between two sorted vectors.
4. [medium] Implement a leaderboard that keeps top-N scores using a `std::priority_queue` or ordered container.
5. [hard] Write a type-agnostic histogram function using templates and iterators.
