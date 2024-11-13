// This code reads the values from 3 potentiometers and
// outputs them to 3 PWM pins

#include <Arduino.h>

void setup()
{
  Serial.begin(9600);

  pinMode(3, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(6, OUTPUT);
}

void loop()
{

  int pot1 = analogRead(A0);
  int pot2 = analogRead(A1);
  int pot3 = analogRead(A2);

  pot1 = map(pot1, 0, 1023, 0, 255);
  pot2 = map(pot2, 0, 1023, 0, 255);
  pot3 = map(pot3, 0, 1023, 0, 255);

  analogWrite(3, pot1);
  analogWrite(5, pot2);
  analogWrite(6, pot3);

  Serial.print("Pot1: ");
  Serial.print(pot1);
  Serial.print(" Pot2: ");
  Serial.print(pot2);
  Serial.print(" Pot3: ");
  Serial.println(pot3);
}