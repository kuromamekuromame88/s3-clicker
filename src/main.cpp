#include <Arduino.h>
#include "USB.h"
#include "USBHIDMouse.h"

USBHIDMouse Mouse;

void setup() {
  // USB初期化
  USB.begin();
  Mouse.begin();

  // PC側がUSBデバイスを認識するまで少し待つ
  delay(2000);
}

void loop() {
  // 左クリック押下
  Mouse.press(MOUSE_LEFT);
  delay(10);                 // 押している時間

  // 左クリック解放
  Mouse.release(MOUSE_LEFT);
  delay(500);                // 次のクリックまでの間隔
}
