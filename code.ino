#include <SoftwareSerial.h>

SoftwareSerial mySerial(0, 1);

void setup() {
  pinMode(13, OUTPUT);
  Serial.begin(9600);
  while (!Serial) {
    ;
  }
  mySerial.begin(9600);
}

void loop() {

  if (Serial.available() > 0) {
    char data = Serial.read();
    if (data == 'O') {
      digitalWrite(13, HIGH);
      delay(1000);
      digitalWrite(13, LOW);
      Serial.print("on");
    }
  }
}