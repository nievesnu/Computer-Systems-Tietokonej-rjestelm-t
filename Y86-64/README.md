# Y86-64 assembly

Assembly exercises in **Y86-64**, the simplified x86-64 instruction set from *Computer Systems: A Programmer's Perspective*. Y86-64 has no multiply, divide or shift instructions, so the exercises build them from additions, subtractions and bit masks.

- **Created:** 23 January 2023
- **Fixed and reorganised:** 24 November 2026

| Folder | Content |
|---|---|
| [`01-basics`](01-basics) | Average and min/max of numbers on the stack, fast multiplication |
| [`02-fibonacci`](02-fibonacci) | Checks whether every number in a list is a Fibonacci number |

## Running

Use any Y86-64 simulator, for example `yas` (assembler) and `yis` (simulator) from the CS:APP student tools:

```sh
yas maxmin.ys && yis maxmin.yo
```

The course grader set the input before running the program: numbers on the stack (`%rsp`), values in registers, or a list in memory. Each folder README explains what each program expects.
