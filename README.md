# Arduino Project 1

This project is designed to study arduino, its modules and partially used in the project programming language C++.

### Details and modules in the project:

- Arduino microcontroller
- Breadbord
- LCD Display 1602 (2x16)
- Potentiometer
- Button (x2)
- Cable for arduino
- Connection wires

### Circuit connection

Stage 1: Connecting the LCD Display with Potentiometer
Components
LCD Display
Potentiometer
Arduino
Connections
LCD Display:

Pin 1 (VSS): Connect to GND on Arduino.
Pin 2 (VDD): Connect to +5V on Arduino.
Pin 3 (V0): Connect to the middle pin of the potentiometer.
Pin 4 (RS): Connect to digital pin 12 on Arduino.
Pin 5 (RW): Connect to GND on Arduino.
Pin 6 (E): Connect to digital pin 11 on Arduino.
Pin 11 (D4): Connect to digital pin 5 on Arduino.
Pin 12 (D5): Connect to digital pin 4 on Arduino.
Pin 13 (D6): Connect to digital pin 3 on Arduino.
Pin 14 (D7): Connect to digital pin 2 on Arduino.
Pin 15 (LED+): Connect to +5V on Arduino (optional, for backlight).
Pin 16 (LED-): Connect to GND on Arduino (optional, for backlight).
Potentiometer:

One outer pin: Connect to GND on Arduino.
Other outer pin: Connect to +5V on Arduino.
Middle pin: Connect to LCD Pin 3 (V0).

---

Stage 2: Displaying Potentiometer Data on the LCD
Additional Connections
Potentiometer:
Middle pin: Also connect to analog pin A0 on Arduino.

---

Stage 3: Connecting Two Buttons and Implementing Logic
Additional Components
Two Buttons (MIN and MAX)
Connections
Buttons:
MIN Button:
One pin: Connect to GND on Arduino.
Other pin: Connect to analog pin A1 on Arduino.
MAX Button:
One pin: Connect to GND on Arduino.
Other pin: Connect to analog pin A2 on Arduino.

---

Summary of Connections
LCD Display:
VSS (Pin 1): GND
VDD (Pin 2): +5V
V0 (Pin 3): Middle pin of potentiometer
RS (Pin 4): Digital pin 12
RW (Pin 5): GND
E (Pin 6): Digital pin 11
D4 (Pin 11): Digital pin 5
D5 (Pin 12): Digital pin 4
D6 (Pin 13): Digital pin 3
D7 (Pin 14): Digital pin 2
LED+ (Pin 15): +5V (optional)
LED- (Pin 16): GND (optional)
Potentiometer:
One outer pin: GND
Other outer pin: +5V
Middle pin: LCD Pin 3 (V0) and analog pin A0
Buttons:
MIN Button:
One pin: GND
Other pin: Analog pin A1
MAX Button:
One pin: GND
Other pin: Analog pin A2

### Instruction

The project consists of 3 modules (each subsequent module is slightly more complex than the previous one). For each module there is source code, video and photos for full immersion in learning with minimal resources.

#### Module 1

In the first module we connect the arduino to the computer and using the source code in the Arduino IDE application we can change the brightness of the text on the display using a potentiometer.

#### Module 2

In the second module we do not change the circuit (we change the source code to the code for module 2) - we output the potentiometer value on the display which has the range 0 - 1023.

#### Module 3

Module number 3 is the most interesting, in it we connect 2 additional buttons that change the digit of the counter on the display.
