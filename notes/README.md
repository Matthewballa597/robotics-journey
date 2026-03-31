
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

## 4-Bit Binary LED Display
- 4 LEDs can represent 4 bits of binary
- Counts from 0000 to 1111 (0 to 15 in decimal)
- Each LED represents a power of 2
- LED 1 = 2^0 = 1
- LED 2 = 2^1 = 2
- LED 3 = 2^2 = 4
- LED 4 = 2^3 = 8

## Clean Breadboard Practices
- Keep wires short and tidy
- Use different colors for different connections
- Positive wires = red, Ground wires = black
- Keep components organized and labeled

## Debugging
- Always check semicolons at end of every line
- Read error messages carefully
- Fix one error at a time
- Test after every fix

## analogWrite vs digitalWrite
- digitalWrite = only HIGH or LOW (0v or 5v)
- analogWrite = varies between 0 and 255
- 0 = 0 volts, 255 = 5 volts
- Use analogWrite for fading, dimming, motor speed
- Only works on PWM pins on Arduino (marked with ~)
- Essential for smooth robot movement control

- ## Pulse Width Modulation (PWM)
- PWM varies voltage by switching HIGH and LOW rapidly
- The ratio of HIGH to LOW time determines average voltage
- High duty cycle = higher average voltage
- Low duty cycle = lower average voltage
- Capacitor can be used to smooth PWM into steady voltage
- Arduino uses PWM on pins marked with ~ symbol
- analogWrite uses PWM to simulate analog voltage
- Used in motor control, LED dimming, servo control
