# C exercises

C programming exercises from the Computer Systems course (*Tietokonejärjestelmät*), with an embedded-systems flavour.

- **Created:** 23 January 2023
- **Fixed and reorganised:** 24 November 2026

| Folder | Topic |
|---|---|
| [`01-basics`](01-basics) | Plain functions and `math.h` |
| [`02-bitwise-sensors`](02-bitwise-sensors) | Decoding raw sensor registers with shifts and masks |
| [`03-pointers`](03-pointers) | Strings, `sprintf`, `strtok`, output parameters |
| [`04-data-structures`](04-data-structures) | Structs and linked lists |
| [`05-libraries`](05-libraries) | `stdlib.h`, `time.h`, dynamic memory |
| [`06-arrays-and-games`](06-arrays-and-games) | Moving average, tic-tac-toe winner check |

Most files contain only the function the course's automatic grader asked for, with no `main`. Compile them with `-c`, or link them with your own test `main`:

```sh
gcc -Wall -Wextra -c file.c          # check that it compiles
gcc -Wall file.c -o prog -lm         # files that have a main()
```

In each folder README, **Original** means the file is as uploaded in 2023. **Fixed (2026)** means I corrected it in November 2026.
