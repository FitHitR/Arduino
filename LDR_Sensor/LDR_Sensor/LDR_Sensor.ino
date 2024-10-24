const int ldrPin = A0;  // LDR sensor OUT pin
const int ledPin = 9;  // LED anode pin

void setup() 
{
  pinMode(ldrPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop()
 {
  int ldrValue = analogRead(ldrPin);
  
  if (ldrValue < 500)   // Adjust threshold value
    {
      digitalWrite(ledPin, HIGH); // Turn on LED
    }
     else 
     {
        digitalWrite(ledPin, LOW);  // Turn off LED
     }

 }
