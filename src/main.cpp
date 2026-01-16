#include <Arduino.h>
#include <USB.h>
#include <USBHIDMouse.h>
#include <USBHID.h>  // ← TinyUSBDevice 用

USBHIDMouse Mouse;

void setup() {
  USB.begin();
  Mouse.begin();

  // ★ TinyUSB がホストにマウントされるまで待つ
  while (!TinyUSBDevice.mounted()) {
    delay(10);
  }

  // 念のため余裕
  delay(300);
}

void loop() {
  Mouse.press(MOUSE_LEFT);
  delay(50);

  Mouse.release(MOUSE_LEFT);
  delay(500);
}
