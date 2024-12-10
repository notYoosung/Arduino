/*
 * https:
 * https:
 *


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
String input = "";
bool isInputValid = false;
int inputLen = 0;



void setup()
{
  Serial.begin(9600);
};

void loop()
{


  while (!isInputValid)
  {
    Serial.println("Enter 12 digit binary: ");
    while (Serial.available() == 0)
    {
    }
    input = Serial.readString();
    Serial.print("Input: ");
    Serial.println(input);
    inputLen = input.length() - 1;
    if (inputLen == 12)
    {
      isInputValid = true;
      for (int i = 0; i < inputLen; ++i)
      {
        char x = input[i];
        Serial.print("V: ");
        Serial.println(x);
        if (x != '0' && x != '1')
        {
          Serial.println("false");
          isInputValid = false;
        }
      }
      if (isInputValid)
      {
        Serial.println("valid");
      }
    } else
    {
      Serial.print("Invalid input length: ");
      Serial.println(inputLen);
    }
  }

}