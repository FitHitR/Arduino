  #include<LiquidCrystal_I2C.h>
  #include<Wire.h>
  #include<RtcDS1302.h>

  LiquidCrystal_I2C lcd(0x3F,16,2);
  Wire myWire(7,6,8);        // DAT, CLK, RST
  RtcDS1302<Wire> Rtc(mtWire);
  void setup() 
   {
      lcd.init();
      lcd.backlight();
      lcd.clear();
      Rtc.Begin();

     // RctDateTime currentTime = RtcDateTime(_DATE_ , _TIME_);
      //Rtc.SetDateTime(currentTime);
   }

  void loop()
   {
    RctDateTime now = Rtc.GetDateTime();
    lcd.clear();
    lcd.setCursor(0,0);
    lcd.print("Date: ");
    lcd.print(now.Day());
    lcd.print("/");
    lcd.print(now.Month());
    lcd.print("/");
    lcd.print(now.Year());

    lcd.print(0,1);
    lcd.print("Time: ");
    lcd.print(now.Hour());
    lcd.print(":");
    lcd.print(now.Minute());
    lcd.print(":");
    lcd.print(now.Second());
    delay(500);



   }
