#include <Arduino.h>
#include <BleMouse.h>

BleMouse bleMouse("ESP32-S3 Mouse", "ESP32", 100);

void setup() {
  bleMouse.begin();
}

void loop() {
  if(bleMouse.isConnected()) {
    bleMouse.click(MOUSE_LEFT);
  }
}
