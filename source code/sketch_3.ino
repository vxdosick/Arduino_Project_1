#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);
int pinPot = A0;
int pinMin = A1;
int pinMax = A2;
int potValue = 0;
int butValue = 0;
bool minButtonState = HIGH;
bool maxButtonState = HIGH;
void setup() {
  lcd.begin(16, 2);
  pinMode(pinMin, INPUT_PULLUP);
  pinMode(pinMax, INPUT_PULLUP);
  Serial.begin(9600);
}
void loop() {
  potValue = analogRead(pinPot);
  int minValue = digitalRead(pinMin);
  int maxValue = digitalRead(pinMax);
  if (minValue == LOW && minButtonState == HIGH) {
    butValue--;
    delay(50);
  }
  minButtonState = minValue;
  if (maxValue == LOW && maxButtonState == HIGH) {
    butValue++;
    delay(50);
  }
  maxButtonState = maxValue;
  lcd.setCursor(0, 0);
  lcd.print("A:" + String(potValue) + " ");
  lcd.setCursor(7, 0);
  lcd.print("B:" + String(butValue) + " ");
  delay(100);
  Serial.print("Pot: ");
  Serial.print(potValue);
  Serial.print(" MinBtn: ");
  Serial.print(minValue);
  Serial.print(" MaxBtn: ");
  Serial.println(maxValue);
}