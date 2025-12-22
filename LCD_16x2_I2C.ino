#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

void setup()
{
  lcd.init();                      // initialize the lcd 
  lcd.backlight();
}


void loop()
{
  lcd.setCursor(0,0);
  lcd.print("Hello, world!");
  delay(2000);
  lcd.clear();
  lcd.print("Please Subscribe ");
  lcd.setCursor(0,1);
  lcd.print("My Channel");
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Powergentek");
  delay(3000);
  lcd.clear();
  lcd.setCursor(0,0);
  lcd.print("Thank You!");
  delay(2000);
}
