#include "SevSeg.h"
SevSeg S;

byte CommonPins[] = {};
byte SegPins[] = {2,3,4,5,6,7,8};

int red = 9;
int yellow = 10;
int grenn = 11;
  void setup()
   {
    S.begin(COMMON_CATHODE, 1, CommonPins, SegPins, 1);
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);

   }

  void loop()
   {
      for(int i=9;i>=0;i--)
      {
        display(i);
        delay(1000);
        if(i<=9 && i>=7)
        {
          digitalWrite(yellow, HIGH);
          digitalWrite(red, LOW);
          digitalWrite(grenn, LOW);
        }
        else if(i<=6 && i>=  4)
        {
          digitalWrite(grenn, HIGH);
          digitalWrite(yellow, LOW);
          digitalWrite(red, LOW);
        }
        else
        {
          digitalWrite(red, HIGH);
          digitalWrite(grenn, LOW);
          digitalWrite(yellow, LOW);
        }
      }
   }

   void display(int num)
   {
    S.setNumber(num);
    S.refreshDisplay();
    delay(20);
   }
