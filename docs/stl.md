# STL Overview

- Containers: `vector`, `deque`, `list`, `map`, `unordered_map`, `set`, `unordered_set`.
- Iterators: categories (input, output, forward, bidirectional, random access) dictate algorithm compatibility.
- Algorithms: prefer standard algorithms for correctness and clarity; leverage `<algorithm>` + `<numeric>`.
- Complexity awareness: know big-O characteristics; avoid unnecessary copies by using `std::move`/`std::ref`.
- Error handling: algorithms typically assume valid ranges; check preconditions in your code.
- Modern additions: `string_view`, `optional`, `variant`, `filesystem` simplify common tasks.
