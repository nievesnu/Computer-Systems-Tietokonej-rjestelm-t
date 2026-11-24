# 02 - Fibonacci checker

**Task:** a zero-terminated list of numbers is stored in memory at `0x700`. Check whether they are all Fibonacci numbers.

- `%rax = 0`: every number is a Fibonacci number
- otherwise `%rax` = the first number that is **not** a Fibonacci number

**Idea:** x is a Fibonacci number if and only if **5x² + 4** or **5x² − 4** is a perfect square. Y86-64 has no multiply or square-root instructions, so both have to be built in software.

- **Created:** 23 January 2023
- **Fixed and reorganised:** 24 November 2026

| File | Description | Status |
|---|---|---|
| `fibonacci_1.ys` | Main solution. Multiplies with shift-and-add, and computes the integer square root bit by bit using a table of powers of two. Works for Fibonacci numbers up to 46 368. | Original |
| `fibonacci_1.txt` | Plain-text copy of `fibonacci_1.ys`. | Original |
| `fibonacci_2.ys` | Identical copy of `fibonacci_1.ys`. | Original |
| `fibonacci_2.txt` | Alternative solution with Finnish comments; the header credits its author. The multiplication subroutine is at `0x400` and the square root at `0x500`. | Original |
| `fibonacci.ys` | Short, readable version: shift-and-add multiplication, and a perfect-square test that subtracts 1, 3, 5, 7, … until it reaches 0. | **Fixed (2026)**: the original was written with IA-32 instructions (`irmovl`, `cmpl`, `imull`, `sete`, `leave`, ...) that do not exist in Y86-64, so it could not be assembled. Rewritten in valid Y86-64. |

`pascal_fib.ys` was removed in 2026. It contained draft notes (in Spanish) and the same non-Y86 code as the old `fibonacci.ys`. The idea it described, testing 5x² ± 4 for a perfect square, is the method explained above and used in `fibonacci.ys`.

In November 2026 `fibonacci.ys`, `fibonacci_1.ys` and `fibonacci_2.txt` were tested in a Y86-64 simulator on 51 lists of numbers below 1000, and all return the correct result.
