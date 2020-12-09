#include <Arduino.h>

#define DELAY 5000

void setup() {
  Serial.begin(9600);
}

void loop() {
  delay(DELAY);
  Serial.println("Hello world!");
}