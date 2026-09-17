#include <Servo.h>

Servo servo1;
Servo servo2;
Servo servo3;

void setup() {
  servo1.attach(9);
  servo2.attach(10);
  servo3.attach(11);
}

void loop() {
  int pot1 = analogRead(A0);
  int pot2 = analogRead(A1);
  int pot3 = analogRead(A2);

  int angle1 = map(pot1, 0, 1023, 0, 180);
  int angle2 = map(pot2, 0, 1023, 0, 180);
  int angle3 = map(pot3, 0, 1023, 0, 180);

  servo1.write(angle1);
  servo2.write(angle2);
  servo3.write(angle3);

  delay(15);
}