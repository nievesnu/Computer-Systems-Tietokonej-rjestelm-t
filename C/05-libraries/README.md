# 05 - Standard libraries

Using `stdlib.h` (`rand`, `malloc`), `time.h` and `limits.h`.

- **Created:** 23 January 2023
- **Fixed and reorganised:** 24 November 2026

| File | Description | Status |
|---|---|---|
| `libraries1.c` | Prints random numbers until the counter reaches the random value, then times the loop with `clock()`. | Original |
| `shuffle.c` | `shuffle(list, size)`: shuffles a `uint8_t` array in place using a scratch copy. Its `main` creates a random array, prints it, shuffles it and prints it again. | **Fixed (2026)**: `main` passed `&list` instead of `list` (a compile error in GCC 14+) and could create a 0-length array. |
| `shu_2.c` | Same function with the scratch copy on the heap. | **Fixed (2026)**: did not compile (a `uint8_t` was used as a pointer), and the `-1` "already used" marker could never match a `uint8_t`. It now uses an `int` buffer from `malloc` and frees it. |
