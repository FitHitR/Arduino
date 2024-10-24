const int microphonePin = A0;  // Analog pin for microphone sensor
const int ledPin = 13;         // Digital pin for LED

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(microphonePin, INPUT);
}

void loop() {
  int microphoneValue = analogRead(microphonePin);
  int threshold = 500;  // Adjust this value as needed

  if (microphoneValue > threshold) {
    digitalWrite(ledPin, HIGH);  // LED ON
  } else {
    digitalWrite(ledPin, LOW);
    delay(100);                        // LED OFF
    digitalWrite(ledPin, HIGH);
    delay(100);
  }
  delay(100);
}

