int trig = 7;
int echo = 6;

int timeInMirror;
int distanceInCm;

void setup() 
{
  Serial.begin(9600);
  pinMode(7, OUTPUT);
  pinMode(6, INPUT);
 

}

void loop() 
{
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);  
  digitalWrite(trig, LOW);

  timeInMirror = pulseIn(echo ,HIGH);

  distanceInCm = timeInMirror / 29 /2;

  Serial.println(distanceInCm);
  delay(100);
  

}
