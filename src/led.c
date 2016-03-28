#include "wiringPi.h"
#include <stdio.h>

#define LedPin 0

int main(){
  if(wiringPiSetup() == -1){
    printf("wiringPi setup failed!\n");
    return 1;
  }
  pinMode(LedPin, OUTPUT);

  while(1){
    digitalWrite(LedPin, LOW);
    delay(500);
    digitalWrite(LedPin,HIGH);
    delay(500);
  }
  return 0;
}
