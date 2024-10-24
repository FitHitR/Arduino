
int red = 9;
int yellow = 10;
int grenn = 11;
  void setup()
   {
    pinMode(9, OUTPUT);
    pinMode(10, OUTPUT);
    pinMode(11, OUTPUT);
   }

  void loop()
   {
      digitalWrite(red, HIGH);
      digitalWrite(yellow, LOW);
      digitalWrite(grenn, LOW);
      delay(200);

      digitalWrite(yellow, HIGH);
      digitalWrite(red, LOW);
      digitalWrite(grenn, LOW);
      delay(200);

      digitalWrite(grenn, HIGH);
      digitalWrite(red, LOW);
      digitalWrite(yellow, LOW);
      delay(200);
   }
