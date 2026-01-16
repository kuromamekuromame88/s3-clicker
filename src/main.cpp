#include <Arduino.h>
#include <USB.h>
#include <USBHIDMouse.h>

USBHIDMouse Mouse;

void setup(){
  Mouse.begin();
}

void loop(){
  Mouse.click(MOUSE_LEFT);
}
