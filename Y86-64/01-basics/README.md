# 01 - Y86-64 basics

- **Created:** 23 January 2023
- **Fixed and reorganised:** 24 November 2026

| File | Input | Output | Status |
|---|---|---|---|
| `avarage.ys` | Positive numbers on the stack, ending with 0 | `%rax` = integer average (sum / count, computed by repeated subtraction) | Original |
| `maxmin.ys` | Numbers on the stack, ending with 0 | `%rdi` = maximum, `%rsi` = minimum | **Fixed (2026)**: renamed from `maxmin.ys.ys`; the code is unchanged. |
| `efficientmul.ys` | `%r11` and `%r12` | `%rax` = `%r11 × %r12`, using shift-and-add instead of repeated addition | Original |
| `efficientmul.txt` | Plain-text copy of `efficientmul.ys` | | Original |

In November 2026 all three programs were tested in a Y86-64 simulator and give the correct results. For example, `maxmin.ys` with `4, 9, -3, 7, 1, 0` gives max 9 and min -3, and `efficientmul.ys` was checked against 300 random products.
