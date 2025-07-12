// LED Blinking Project
// Created by Mahesh Pareta
// Electronics Project Series – 01

int led = 13;  // Pin 13 is connected to the LED

void setup() {
  pinMode(led, OUTPUT);  // Set digital pin 13 as output
}

void loop() {
  digitalWrite(led, HIGH);  // Turn the LED ON
  delay(1000);              // Wait for 1 second
  digitalWrite(led, LOW);   // Turn the LED OFF
  delay(1000);              // Wait for 1 second
}
