const int pirPin = 2;  // PIR sensor OUT pin
const int ledPin = 9;  // LED anode pin

void setup()
 {
  pinMode(pirPin, INPUT);
  pinMode(ledPin, OUTPUT);
 }

void loop() 
{
  int pirState = digitalRead(pirPin);
  
  if (pirState == HIGH)   // Motion detected
    {
      digitalWrite(ledPin, LOW);  // Turn on LED
    }
     else
      {
        digitalWrite(ledPin, HIGH);  // Turn off LED
      }
  delay(50);
}
