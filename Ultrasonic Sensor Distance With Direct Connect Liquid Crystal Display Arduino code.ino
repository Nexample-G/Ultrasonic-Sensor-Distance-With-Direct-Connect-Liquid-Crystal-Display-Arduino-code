/*
* Ultrasonic Sensor Distance With Direct Connect Liquid crystal display Arduino code
* by Nexample,
* https://youtu.be/yz-RFth49us
*/
#include <LiquidCrystal.h>
LiquidCrystal lcd(1, 2, 4, 5, 6, 7);
  const int trig = 9;
  const int echo = 10;
  long DRN;
  int DsCm, DsIn;
void setup() {
  lcd.  begin(16,2);
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);
}
void loop() {
  digitalWrite(trig, LOW);
  delayMicroseconds(2);
  digitalWrite(trig, HIGH);
  delayMicroseconds(10);
  digitalWrite(trig, LOW);
  DRN = pulseIn(echo, HIGH);
  DsIn = DRN*0.0133/2;
  DsCm= DRN*0.034/2;
  lcd.setCursor(0,0);
  lcd.print("DISTANCE > ");
  lcd.print(DsIn);
  lcd.print('.');
  lcd.print(DsCm);
  lcd.setCursor(0,1);
  lcd.print("INCH CENTIMETER");
  delay(10);
}
