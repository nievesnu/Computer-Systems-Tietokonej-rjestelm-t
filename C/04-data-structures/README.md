# 04 - Data structures

Structs, passing structs by value and by pointer, and linked lists.

- **Created:** 23 January 2023
- **Fixed and reorganised:** 24 November 2026

| File | Description | Status |
|---|---|---|
| `DataStructures1.c` / `struct_scan.c` | `scan(mpu, index, threshold)`: if `mpu.data[index]` is above the threshold, prints all six accelerometer/gyroscope values as CSV. | Original |
| `DataStructures2.c` | `calculate_path_distance(path)`: walks a linked list of 3-D points and stores the total length of the path. Includes a test `main` (expected output `6.359174`). | **Fixed (2026)**: the distance sum was never initialised (undefined behaviour); `main` had no return type. |
| `path.c` | Function-only version of `DataStructures2.c`. | **Fixed (2026)**: same initialisation fix. |

`DataStructures2 (1).c`, a duplicate download of `path.c` with the same bug, was removed in 2026.
