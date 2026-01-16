#include <Arduino.h>
#include <USBHIDMouse.h>

int setup(void){
  Mouse.begin();
}

int loop(void){
  Mouse.click(MOUSE_LEFT);
}
