

const int soilMoisturePin = A0;  // Analog pin for soil moisture sensor
const int ledPin = 13;         // Digital pin for servo motor
const int dryThreshold = 30;     // Dry soil threshold
const int wetThreshold = 60;     // Wet soil threshold

void setup()
 {
   pinMode(ledPin, OUTPUT);
   pinMode(soilMoisturePin, INPUT);
 }

void loop() 
{
  int soilMoistureValue = analogRead(soilMoisturePin);
  int soilMoisturePercentage = map(soilMoistureValue, 0, 1023, 0, 100);

  if (soilMoisturePercentage > dryThreshold)
   {
       digitalWrite(ledPin, HIGH);
  }
   else if (soilMoisturePercentage < wetThreshold)
    {

    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
  } 
  else 
  {
    digitalWrite(ledPin, HIGH);
    delay(200);
    digitalWrite(ledPin, LOW);
    delay(200);
  }
  
}

  
  