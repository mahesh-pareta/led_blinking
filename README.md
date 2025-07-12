# led_blinking
This is a basic LED Blinking project using an Arduino Uno. It helps beginners understand digital output and timing using the delay() function. An LED connected to a digital pin blinks on and off at regular intervals.

**Objective**
To demonstrate how to use Arduino to control a digital output pin and blink an LED at fixed time intervals.

**Components Used**
- 1× Arduino Uno
- 1× LED 
- 1× 220Ω Resistor
- Breadboard
- Jumper Wires
- USB Cable

**Circuit Connections**
-         Component                         Arduino Pin
- LED Anode (+ long leg) → Resistor →	Digital Pin 13
- LED Cathode (– short leg)	  →                     GND

**Working Principle**
The Arduino controls the LED by sending HIGH (on) and LOW (off) signals to a digital output pin. The delay() function is used to wait between ON and OFF states, making the LED blink visibly.
