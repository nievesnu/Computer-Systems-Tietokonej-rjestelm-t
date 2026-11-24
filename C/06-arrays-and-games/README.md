# 06 - Arrays and games

Processing arrays: a simple moving average and a tic-tac-toe winner check.

- **Created:** 23 January 2023
- **Fixed and reorganised:** 24 November 2026

| File | Description | Status |
|---|---|---|
| `sma.c` | `movavg(array, size, window)`: prints the simple moving average as CSV with two decimals; `{1,2,4,6,9}` with window 3 gives `2.33,4.00,6.33`. | **Fixed (2026)**: the results array was one element too small (stack buffer overflow); `window == 0` and `window > size` are now handled. |
| `move.c` | First version of the same exercise, with a test `main`. | **Fixed (2026)**: the original summed an uninitialised variable and used `1/3` (which is 0 in C). Rewritten; it prints `SMA is: 2.33,4.00,6.33`. |
| `tictactoe.c` | `tictactoe_check(board, win_len)` on a 10×10 board (0 = empty, 1 = X, 2 = O). Returns 1 if X has `win_len` in a row, 2 if O has, and 0 if nobody or both have. Checks rows, columns and both diagonals. | **Fixed (2026)**: rows leaked into the next row, the first cell of every row was skipped, the counters were not reset between diagonals, and the anti-diagonal (↙) was never checked. |
