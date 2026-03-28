
## Breadboard
- Columns are connected, rows are not
- Power rails (+ and -) run along the sides
- Use power rail for common GND connections

## LED
- Long leg = positive = connects to resistor
- Short leg = negative = connects to GND
- Always use 220 ohm resistor

- ## Variables in Arduino
- Declare variables at the top of code
- Makes modification easier
- Use comments to differentiate code blocks
- Comments use // before the line

## Binary Number System
- Binary uses only 0 and 1
- It is the building block of all digital electronics
- Every microprocessor and computer runs on binary
- ON = 1, OFF = 0 in digital circuits

## Binary to Decimal Conversion
- Each position represents a power of 2
- Rightmost position = 2^0 = 1
- Next position = 2^1 = 2
- Next position = 2^2 = 4
- Next position = 2^3 = 8
- Example: 1010 in binary = 8+0+2+0 = 10 in decimal

## Decimal to Binary Conversion
- Divide the number by 2 repeatedly
- Write down the remainders
- Read remainders from bottom to top
- Example: 10 in decimal = 1010 in binary

## Binary in Arduino
- LEDs can represent binary digits
- LED ON = 1, LED OFF = 0
- Multiple LEDs can display binary numbers
- Used binary counter to display numbers 1-15
