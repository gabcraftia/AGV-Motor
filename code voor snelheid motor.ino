#include <Servo.h>

Servo esc;
int button1 = 22;


void setup() {
  // put your setup code here, to run once:
esc.attach(9);
pinMode(button1, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
if (digitalRead(button1) == LOW) {
  esc.writeMicroseconds(1750);
  }
else {
  esc.writeMicroseconds(2400);
  }
}
