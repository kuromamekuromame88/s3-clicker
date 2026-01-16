/**
 * This example turns the ESP32 into a Bluetooth LE mouse that scrolls down every 2 seconds.
 */
#include <BleMouse.h>

BleMouse bleMouse;

void setup() {
  Serial.begin(115200);
  Serial.println("BLEマウスを開始しました");
  bleMouse.begin();
}

void loop() {
  if(bleMouse.isConnected()) {
    bleMouse.click(MOUSE_LEFT);
  }
  delay(2000);
}
