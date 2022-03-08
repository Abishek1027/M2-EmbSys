#include"patient.h"
#include"pin.cpp"


LiquidCrystal lcd(RS_pin, EN_pin, D4_pin, D5_pin, D6_pin, D7_pin);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 2);  
  pinMode(7,INPUT_PULLUP);
  pinMode(6,OUTPUT);
}


void loop() {

  int motor=digitalRead(7);
  int sensorValue1 = analogRead(A4);
  int sensorValue2 = analogRead(A3);
  int sensorValue3 = analogRead(A2);

  if(motor==LOW)
  {
  digitalWrite(6,HIGH);
  Serial.print("sen1= ");
  Serial.print(sensorValue1);
  Serial.print(" senr2= ");
  Serial.print(sensorValue2);
  Serial.print(" sen3= ");
  Serial.print(sensorValue3);
  Serial.println();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("S1= ");
  lcd.print(sensorValue1);
  lcd.setCursor(8, 0);
  lcd.print("S2= ");
  lcd.print(sensorValue2);
  lcd.setCursor(0, 1);
  lcd.print("S3= ");
  lcd.print(sensorValue3);
  lcd.setCursor(8, 1);
  lcd.print("OP= ");
  lcd.print("ON");
delay(500);
 
  }

else if(sensorValue1>300)
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("EMERGENCY!!!!!!!!");  
delay(500);

}
 else
  {
  digitalWrite(6,LOW);
   Serial.print("sen1= ");
  Serial.print(sensorValue1);
  Serial.print(" senr2= ");
  Serial.print(sensorValue2);
  Serial.print(" sen3= ");
  Serial.print(sensorValue3);
  Serial.println();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("S1= ");
  lcd.print(sensorValue1);
  lcd.setCursor(8, 0);
  lcd.print("S2= ");
  lcd.print(sensorValue2);
  lcd.setCursor(0, 1);
  lcd.print("S3= ");
  lcd.print(sensorValue3);
  lcd.setCursor(8, 1);
  lcd.print("OP= ");
  lcd.print("OFF");
delay(500);
  }
}       
