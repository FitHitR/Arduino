// Arduino, Altra Sonok Sensor, Servo motor 2

#include<Servo.h>
int trigPin =  3;
int echoPin =  2;
Servo servo_1;
Servo servo_2;
int sound = 250;

void setup()
 {
  Serial.begin(9600);
  pinMode(trigPin, OUTPUT);
  pinMode(echoPin, INPUT);
  servo_1.attach(4);
  servo_2.attach(7);
  }


void loop()
 {
   long duration, distance;
   digitalWrite(trigPin, LOW);
   delayMicroseconds(5);

   digitalWrite(trigPin, HIGH);
   delayMicroseconds(100);

   digitalWrite(trigPin, LOW);
   
   duration = pulseIn(trigPin, HIGH);
   distance = (duration/2)/29.1;

   if(distance<5)
   {
    Serial.println("distance is less than 5");
    servo_1.write(90);
    servo_2.write(90);
   }
   else
   {
    servo_1.write(0);
    servo_2.write(0);
   }

   if(distance>60 ||distance<=0)
   {
    Serial.println("distance is more than 60");
   }
   else
   {
    Serial.print(distance);
    Serial.println("cm");
   }
   delay(500);

   


}
