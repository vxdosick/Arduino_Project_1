#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int pinPot = A0;
int potValue = 0;
void setup() {
  lcd.begin(16, 2);
}
void loop() {
  potValue = analogRead(pinPot);
  lcd.setCursor(0, 0);
  lcd.print("A:" + String(potValue));
  delay(100);
}