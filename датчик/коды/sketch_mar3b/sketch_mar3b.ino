#include <Wire.h>
#include "Adafruit_HTU21DF.h"

Adafruit_HTU21DF htu = Adafruit_HTU21DF();

void setup() {
  Serial.begin(115200);

  if (!htu.begin()) {
    Serial.println("Check circuit. HTU21D not found!");
    while (1);
  }
}

void loop() {
    float temp = htu.readTemperature();
    float hum = htu.readHumidity();
    Serial.print("Temperature(°C): "); 
    Serial.print(temp); 
    Serial.print("\t\t");
    Serial.print("Humidity(%): "); 
    Serial.println(hum);
    delay(500);
}
