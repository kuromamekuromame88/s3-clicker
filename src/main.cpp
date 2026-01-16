/**
 * This example turns the ESP32 into a Bluetooth LE mouse that scrolls down every 2 seconds.
 */
#include <Arduino.h>
#include <BleMouse.h>

BleMouse bleMouse;

void setup() {
  USBSerial.begin(115200);
  USBSerial.println("BLEマウスを開始しました");
  bleMouse.begin();
}

void loop() {
  if(bleMouse.isConnected()) {
    bleMouse.click(MOUSE_LEFT);
  }
  delay(2000);
}
