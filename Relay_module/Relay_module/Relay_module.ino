int relay =2;


void setup() 
{
  pinMode(2,OUTPUT);

}

void loop() 
{
  digitalWrite(relay, HIGH);
  delay(20000);
  digitalWrite(relay, LOW);
  delay(20000);
  
  

}
