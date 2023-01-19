#include <Arduino.h>
#include <ESP8266WiFi.h>

#define jorge D0
#define luisa D2
#define edi D4
#define valen D5
#define dani D8

#define prueba LED_BUILTIN



void setup() {
  // put your setup code here, to run once:
  pinMode(jorge, OUTPUT);
  pinMode(luisa, OUTPUT);
  pinMode(edi, OUTPUT);
  pinMode(valen, OUTPUT);
  pinMode(dani, OUTPUT);
  pinMode(prueba, OUTPUT);
}

void loop() {
  // put your mai n code here, to run repeatedly:
  digitalWrite(jorge, HIGH);
  delay(500);
  digitalWrite(jorge, LOW);
  delay(500);
  digitalWrite(luisa, HIGH);
  delay(500);
  digitalWrite(luisa, LOW);
  delay(500);
  digitalWrite(edi, HIGH);
  delay(500);
  digitalWrite(edi, LOW);
  delay(500);
  digitalWrite(valen, HIGH);
  delay(500);
  digitalWrite(valen, LOW);
  delay(500);
  digitalWrite(dani, HIGH);
  delay(500);
  digitalWrite(dani, LOW);
  delay(500);
  digitalWrite(prueba, HIGH);
  delay(3000);
  digitalWrite(prueba, LOW);
  delay(3000);
}