
#include <Servo.h>

Servo servo;

void setup() {
   servoBase.attach(A1);
   servoBase.write(0); 
}

void loop() {

  for(int i=0; i<=180; i=i+10)
  {
   servoBase.write(i);
   delay(2000);
  }
 }
 