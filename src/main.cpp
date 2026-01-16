#include <Arduino.h>
#include <Mouse.h>

int setup(void){
  Mouse.begin();
}

int loop(void){
  Mouse.click(MOUSE_LEFT);
}
