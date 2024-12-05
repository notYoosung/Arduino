/*
 * https:
 * https:
 *
*/


Input - serial text :
  check size ( == 12)
  check contents (0 || 1)

Input - 2 button :
  A :
    convert input to hex
  B :
    convert input to dec

Display :
  converted input

 */
#include "../../../../.platformio/packages/framework-arduinorenesas-uno/libraries/HID/HID.h"
#include "../../../../.platformio/packages/framework-arduinorenesas-uno/cores/arduino/Arduino.h"
char input[] = "";
bool isInputValid = false;
int inputLen = 0

void setup()
{
  Serial.begin(9600);
}

void loop()
{

  Serial.println("Enter 12 digit binary: ");
  input = Serial.readString();

  while (!isInputValid)
  {
    for (auto x : input)
    {
      Serial.println(x)
    }
  }

  while (Serial.available() == 0)
  {
  }
  height = Serial.parseFloat();
}