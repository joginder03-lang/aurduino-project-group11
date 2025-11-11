// ***************************************************************
// * Arduino LED Blink Project                                   *
// * Description: This program makes an LED blink ON and OFF     *
// * every second using pin 8 of the Arduino Uno board.          *
// ***************************************************************

// Declare a variable for the LED pin
int ledPin = 8; // The LED is connected to digital pin 8

void setup() {
  // The setup() function runs once when you press reset or power the board

  pinMode(ledPin, OUTPUT); // Configure pin 8 as an OUTPUT pin
  // OUTPUT mode allows the pin to send voltage to components (like LEDs)
}

void loop() {
  // The loop() function runs continuously after setup()

  digitalWrite(ledPin, HIGH); // Turn the LED ON (send 5V to pin 8)
  delay(1000);                // Wait for 1000 milliseconds (1 second)

  digitalWrite(ledPin, LOW);  // Turn the LED OFF (0V on pin 8)
  delay(1000);                // Wait for 1 second before turning it back ON

  // The loop repeats, making the LED blink continuously
}
