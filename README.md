# Arduino LED Effects

A simple Arduino project demonstrating multiple LED lighting patterns including fast blinking, sequential lighting, random blinking, all-on/off, and a ping-pong wave effect.

## Features

- Fast blinking of selected LEDs
- Sequential turning on and off LEDs
- Random LED blinking for dynamic effect
- Turning all LEDs on and off simultaneously
- Smooth ping-pong wave animation across LEDs

## Hardware Required

- Arduino board (e.g., Arduino Uno)
- 5 LEDs connected to digital pins 13, 8, 7, 2, and 10
- Current-limiting resistors (220Ω recommended) for each LED
- Jumper wires and breadboard (optional)

## Wiring

Connect each LED's anode (+) to the specified digital pin through a resistor, and the cathode (-) to the Arduino GND.

| LED | Arduino Pin |
|-----|-------------|
| LED1| 13          |
| LED2| 8           |
| LED3| 7           |
| LED4| 2           |
| LED5| 10          |

## Usage

1. Connect the LEDs as described.
2. Open the Arduino IDE and load the provided `.ino` sketch.
3. Upload the sketch to your Arduino board.
4. Observe the LED lighting patterns running in sequence automatically.

## Code Explanation

- The `setup()` function initializes all LED pins as outputs and seeds the random number generator.
- The `loop()` function runs through different lighting effects:
  - Fast blinking alternating pattern
  - Sequential turning LEDs on and off
  - Random single LED blinking
  - All LEDs on and off simultaneously
  - Ping-pong wave effect cycling back and forth

## License

This project is licensed under the MIT License. Feel free to use and modify it as you like.

---

Happy tinkering with LEDs and Arduino!
