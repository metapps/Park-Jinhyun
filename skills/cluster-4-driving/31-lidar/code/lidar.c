#include <Wire.h>
#include <LIDARLite.h>

LIDARLite myLidarLite;

void setup() {
  Serial.begin(115200);
  myLidarLite.begin();
  myLidarLite.beginContinuous();
  pinMode(3, INPUT);
}

void loop() {
  if(!digitalRead(3)){
    Serial.println(myLidarLite.distanceContinuous());
  }
}
