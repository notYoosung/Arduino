#include <Arduino.h>
int led = 13;

void setup() {
  pinMode(led, OUTPUT);
}

void loop() {
  digitalWrite(led, HIGH);
  delay(1000);
  digitalWrite(led, LOW);
  delay(1000);
}
// https://lucid.app/lucidchart/fd240305-71fa-484c-a09c-ff9a34840e35/edit?beaconFlowId=265A44DBB6BE8A10&invitationId=inv_3ceb8bef-9edb-4ac3-9b21-026712466c3d&page=0_0#
// https://docs.arduino.cc/tutorials/uno-r4-wifi/led-matrix/