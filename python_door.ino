#include <Servo.h>
String pos;
int e = 0;
Servo myservo;
void setup() {
myservo.attach(3);
Serial.begin(9600); }
void loop() {
if (Serial.available()>=1) {
pos = Serial.readString();
e = pos.toInt();
myservo.write(e);
delay(2000); } }

