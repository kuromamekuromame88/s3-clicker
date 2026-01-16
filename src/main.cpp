#include <Arduino.h>
#include <USB.h>
#include <USBHIDMouse.h>

USBHIDMouse Mouse;

void setup() {
  USB.begin();
  Mouse.begin();

  // ★ USBホスト（PC）がマウントするまで待つ
  while (!USBDevice.mounted()) {
    delay(10);
  }

  // 念のため少し余裕を持つ
  delay(500);
}

void loop() {
  Mouse.press(MOUSE_LEFT);
  delay(50);

  Mouse.release(MOUSE_LEFT);
  delay(500);
}
