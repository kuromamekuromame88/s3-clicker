#include <Arduino.h>
#include <USBHIDMouse.h>

void setup(){
  Mouse.begin();
}

void loop(){
  Mouse.click(MOUSE_LEFT);
}
