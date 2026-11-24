# Computer Systems (Tietokonejärjestelmät)

My exercises for the **Computer Systems** course (*Tietokonejärjestelmät* in Finnish), which I took during my Erasmus exchange in Finland.

The course covered two things:

- **C for embedded systems**: bit masks and sensor registers, pointers, structs and linked lists, the standard library, arrays.
- **Y86-64 assembly**: the simplified x86-64 instruction set from *Computer Systems: A Programmer's Perspective* (Bryant & O'Hallaron).

| | |
|---|---|
| **Created** | 23 January 2023 (first upload) |
| **Fixed and reorganised** | 24 November 2026 |

## Repository layout

```
.
├── C/
│   ├── 01-basics/              math functions (factorial, volumes, areas)
│   ├── 02-bitwise-sensors/     decoding raw sensor registers with bit masks
│   ├── 03-pointers/            strings and output parameters through pointers
│   ├── 04-data-structures/     structs and linked lists
│   ├── 05-libraries/           rand(), time(), malloc()
│   └── 06-arrays-and-games/    moving average, tic-tac-toe checker
└── Y86-64/
    ├── 01-basics/              average, min/max, fast multiplication
    └── 02-fibonacci/           checks whether numbers are Fibonacci numbers
```

Each folder has its own README that explains what every file does.

## What changed in 2026

I uploaded the original files on **23 January 2023**. In **November 2026** I sorted them into folders and fixed the ones that did not compile or gave wrong results:

- The git history was rewritten so each untouched file sits in its folder **from its original 2023 commit**. GitHub still shows 23 January 2023 next to every file I did not change.
- Only the files below have a 2026 commit. The folder READMEs mark them as **Fixed (2026)**.

| File | Problem | Fix |
|---|---|---|
| `C/03-pointers/charcounter.c`, `Pointers2.c`, `charcounter.txt` | Leftover debug `printf`; symbols such as `[`, `^` and `_` counted as consonants; loop index overflowed after 255 characters | Removed debug output, check letters only, `int` index |
| `C/04-data-structures/DataStructures2.c`, `path.c` | Distance sum used without being initialised (undefined behaviour); `main()` had no return type | `double d = 0.0;`, `int main(void)` |
| `C/02-bitwise-sensors/humidity.c`, `temperature.c` | `main` returned the float result as the exit code, so the value was lost | Print the value and return 0 |
| `C/06-arrays-and-games/move.c` | Wrong moving average (uninitialised sum, `1/3 == 0`) | Fixed the averaging loop |
| `C/06-arrays-and-games/sma.c` | Stack buffer overflow (array one element too small) | Correct size, input checks |
| `C/05-libraries/shu_2.c` | Did not compile (`uint8_t` used as a pointer) | Real heap buffer, freed at the end |
| `C/05-libraries/shuffle.c` | `&list` passed instead of `list` (an error in GCC 14+); array could have size 0 | Fixed the call and the size |
| `C/06-arrays-and-games/tictactoe.c` | Rows leaked into the next row, the first cell of each row was skipped, the anti-diagonal was never checked | Fixed the row reset and the diagonals, added the anti-diagonal |
| `Y86-64/01-basics/maxmin.ys` | File was named `maxmin.ys.ys` | Renamed |
| `Y86-64/02-fibonacci/fibonacci.ys` | Used IA-32 instructions (`irmovl`, `cmpl`, `imull`, `sete`, ...) that do not exist in Y86-64 | Rewritten in valid Y86-64 |
| `Y86-64/02-fibonacci/pascal_fib.ys` | Draft notes plus the same non-Y86 code | Removed; the explanation is now in that folder's README |
| `C/04-data-structures/DataStructures2 (1).c` | Duplicate download of `path.c` | Removed |

## How to build and run

**C:** most files contain only the function the course's automatic grader asked for, with no `main`. To check that one compiles:

```sh
gcc -Wall -Wextra -c C/03-pointers/charcounter.c
```

Files that include a `main` can be run directly:

```sh
gcc -Wall C/06-arrays-and-games/move.c -o move -lm && ./move
```

**Y86-64:** assemble and run the `.ys` files with a Y86-64 simulator, such as `yas`/`yis` from the CS:APP student tools or any online Y86-64 simulator.
