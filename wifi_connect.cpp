#include <WiFi.h>
#include <Ultrasonic.h>

const char* ssid = "your_SSID";
const char* password = "your_PASSWORD";
Ultrasonic ultrasonic(12, 13);  // Trig and Echo pins

void setup() {
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting to WiFi...");
  }
  Serial.println("Connected to WiFi");
}