# 02 - Bitwise operations and sensor registers

Converting the raw register values of embedded sensors into physical units using shifts and bit masks.

- **Created:** 23 January 2023
- **Fixed and reorganised:** 24 November 2026

| File | Description | Status |
|---|---|---|
| `ambient.c` | `light(reg)`: ambient-light register with a 4-bit exponent E and a 12-bit mantissa R; lux = 0.01 · 2^E · R. | Original |
| `humidity.c` | `humidity(reg)`: relative humidity = reg / 2^16 · 100 %. | **Fixed (2026)**: `main` returned the float as the exit code; it now prints the value. |
| `pressure.c` | `pressure(xlsb, lsb, msb)`: builds the 20-bit pressure reading from three 8-bit registers (`msb<<12 \| lsb<<4 \| xlsb>>4`). | Original |
| `temperature.c` | `temperature(reg, factor)`: drops the 2 status bits and scales the 14-bit value (e.g. 0.03125 °C per LSB). | **Fixed (2026)**: same `main` problem as `humidity.c`. |

The `0b...` binary literals are a GCC extension (standard since C23).
