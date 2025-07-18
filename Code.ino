// LED Blink Program for Arduino UNO
int ledPin = 13; // LED connected to digital pin 13

void setup() {
  pinMode(ledPin, OUTPUT); // Set pin as output
}

void loop() {
  digitalWrite(ledPin, HIGH); // Turn LED on
  delay(1000);                // Wait 1 second
  digitalWrite(ledPin, LOW);  // Turn LED off
  delay(1000);                // Wait 1 second
}
