#include<Servo.h>
Servo servoq;
void setup() {
  servoq.attach(6);

}

void loop() {
  servoq.write(15);
  delay(500);
  servoq.write(60);
  delay(1000);

}
