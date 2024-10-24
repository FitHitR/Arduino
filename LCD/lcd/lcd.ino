#include<Wire.h>
#include<LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x20,16,2);

void setup()
 {
  lcd.init();
  lcd.backlight();
  lcd.print("Hellow Wold !");
}

void loop() {
  // Your code here
}
