# 03 - Pointers

Working with strings and returning several values through pointers.

- **Created:** 23 January 2023
- **Fixed and reorganised:** 24 November 2026

Some exercises were uploaded twice: once under the exercise name (`PointersN.c`) and once under a descriptive name.

| File | Description | Status |
|---|---|---|
| `Pointers1.c` / `sensor.c` | `write_sensors(str, ax, ay, az, press, temp)`: formats the sensor readings into a CSV string with `sprintf`, e.g. `+0.12,-1.00,+9.81,101325,22.50`. | Original |
| `Pointers2.c` / `charcounter.c` | `charcounter(str, result)`: `result[0]` = number of vowels, `result[1]` = number of consonants. | **Fixed (2026)**: removed leftover debug `printf`s; characters such as `[ ] ^ _` are no longer counted as consonants; strings longer than 255 characters no longer loop forever. |
| `charcounter.txt` | Plain-text copy of `charcounter.c`. | **Fixed (2026)**: same fix. |
| `Pointers3.c` / `mean_list.c` | `mean(list)`: average of a comma-separated string of numbers such as `"1.5,2,3"`, using `strtok` and `atof`. | Original |
