# 01 - Basics

Simple functions using `math.h` and fixed-size integers.

- **Created:** 23 January 2023
- **Reorganised:** 24 November 2026 (no file in this folder needed fixing)

| File | Description | Status |
|---|---|---|
| `cone_volume.c` | `cone_volume(radius, height)` returns π·r²·h / 3. Uses `M_PI`, so compile with GCC's default (GNU) mode, not `-std=c11`. | Original |
| `fact.c` | `factorial(n)` with `int64_t`; returns -1 for n > 20, where the result would overflow 64 bits. | Original |
| `triangle_thingy.c` | Area of a figure made of two squares, a right triangle and two circular sectors, all derived from one length `x`. Has a `main`. | Original |
