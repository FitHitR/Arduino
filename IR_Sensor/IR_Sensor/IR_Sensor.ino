const int irPin = 2;  // IR sensor OUT pin
const int ledPin = 9;  // LED anode pin

void setup() 
{
  pinMode(irPin, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() 
{
  int irState = digitalRead(irPin);
  
  if (irState == LOW)   // IR sensor detects obstacle
    {
      digitalWrite(ledPin, HIGH);  // Turn on LED
    } 
  else 
  {
    digitalWrite(ledPin, LOW);  // Turn off LED
  }
  delay(50);
}



