#include <HTU21D.h>

HTU21D myHumiditySensor;

void setup() {
  Serial.begin(9600);
  Wire.begin();
  
  if (!myHumiditySensor.begin()) {
    Serial.println("HTU21D not found");
    while (1);
  }
}

void loop() {
  float temperature = myHumiditySensor.getTemperature();
  float humidity = myHumiditySensor.getHumidity();
  
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");
  
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.println(" %");
  
  delay(2000);  // Задержка 2 секунды
}

