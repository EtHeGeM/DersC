# Module 12: Files, Exceptions & Mini Project (Sensor Log Analyzer)

## Concepts
- File I/O with `<fstream>` and `<filesystem>`
- Exception safety, RAII with file handles
- Error reporting vs exception throwing
- Designing a small CLI application

## Why it matters
Real systems persist data and must fail safely. Well-structured file handling and error surfaces keep logs analyzable and prevent data loss.

## Common pitfalls
- Forgetting to check stream states
- Mixing text/binary modes accidentally
- Poor exception hygiene that hides root causes
- Ignoring edge cases like empty files or malformed lines

## Micro-lab (10–20 minutes)
Run the Sensor Log Analyzer on `data/sample.csv` and print a text summary. Modify the sample file to add a new sensor and verify filtering and CSV output.

## Exercises
1. [easy] Add validation for malformed CSV rows and count skipped lines.
2. [easy] Implement a `--stats` flag to print record counts per sensor.
3. [medium] Add support for reading from `stdin` when no `--input` is given.
4. [medium] Extend output formats to JSON (consider a small JSON writer).
5. [hard] Add time-based filtering (e.g., `--start`/`--end` timestamps) with unit tests.
