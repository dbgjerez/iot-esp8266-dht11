#include <Arduino.h>
#include <Adafruit_Sensor.h>
#include "DHT.h"

#define DHT_PIN D2
#define DHTTYPE DHT11
// Sensor is very slow, readings should be almost every 2 seconds
#define DELAY 5000

DHT dht(DHT_PIN, DHTTYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(DELAY);

  // Read the humidity
  float h = dht.readHumidity();
  // Read temperature as Celsius 
  float t = dht.readTemperature();

  // Check if any reads have failed
  if (isnan(h) || isnan(t)) {
    Serial.println(F("Failed reading from DHT sensor"));
    return;
  }

  // Compute heat index in Celsius (isFahreheit = false)
  float hic = dht.computeHeatIndex(t, h, false);
  
  Serial.print(F("\nHumedity: "));
  Serial.print(h);
  Serial.print(F("% "));
  Serial.print(F("Temperature: "));
  Serial.print(t);
  Serial.print(F("°C "));
  Serial.print(F("Heat index: "));
  Serial.print(hic);
  Serial.print(F("°C"));

}
