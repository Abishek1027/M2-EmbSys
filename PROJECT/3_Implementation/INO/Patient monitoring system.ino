#include <avr/io.h>
#include <util/delay.h>
#include <stdlib.h>
#include <LiquidCrystal.h>

int D7_pin = 1;
int D6_pin = 2;
int D5_pin = 3;
int D4_pin = 4;
int EN_pin = 11;
int RS_pin = 12;

LiquidCrystal lcd(RS_pin, EN_pin, D4_pin, D5_pin, D6_pin, D7_pin);

void setup() {
  Serial.begin(9600);
  lcd.begin(16, 4);  
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
  Serial.print("pills are delivered");
  Serial.print(sensorValue1);
  Serial.print("DRIPS LEVEL= ");
  Serial.print(sensorValue2);
  Serial.print("HANDGLOVE= ");
  Serial.print(sensorValue3);
  Serial.println();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("Motor = Run ");
  lcd.setCursor(0, 1);
  lcd.print("PILLS DELIVERED ");
  lcd.print(sensorValue2);
  
delay(500);
 
  }

else if(sensorValue1>300)
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("LOW HEART RATE");  
delay(500);
}
else if(sensorValue2>300)
{
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("DRIPS EMPTY");  
delay(500);}

else if(sensorValue3>300)
{
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("EMERGENCY");  
delay(500);

}
 else
  {
  digitalWrite(6,LOW);
   Serial.print("HEARTRATE= ");
  Serial.print(sensorValue1);
  Serial.print(" DRIPS LEVEL= ");
  Serial.print(sensorValue2);
  Serial.print(" HANDGLOVE= ");
  Serial.print(sensorValue3);
  Serial.println();
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("HEARTRATE= ");
  lcd.print(sensorValue1);
  lcd.setCursor(0, 1);
  lcd.print("DRIPS= ");
  lcd.print(sensorValue2);
  lcd.setCursor(0, 2);
  lcd.print("HANDGLOVE= ");
  lcd.print(sensorValue3);
  lcd.setCursor(0, 3);
  lcd.print("OP= ");
  lcd.print("OFF");
delay(500);
  }
}       
