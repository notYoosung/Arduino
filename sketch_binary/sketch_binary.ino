/*
  Bryan Le
  CENG-1520-02
  Arduino Project 2 (option A) – Converting Binary Numbers

  Bonus:
    (1) Any length of binary strings

  Summary:
    Input binary string into the serial console.

    Buttons with input pins:
      13: hex output
      12: decimal output

    Press a button to convert binary to its respective base.


  Example (Serial Console):
    Enter a binary number: 101001101001
    Select a button.
    Decimal: 2665


  Additional Resources:
    https://www.geeksforgeeks.org/program-decimal-hexadecimal-conversion/

*/

// Input button pins
#define HEX_PIN 13
#define DEC_PIN 12

// Declarations
String input = "";
bool isInputValid = false;
int inputLen = 0;
bool hexButtonState = false;
bool decButtonState = false;
int decimalOutput = 0;

// Integer to hex string
// https://www.geeksforgeeks.org/program-decimal-hexadecimal-conversion/
String decToHexa(int n)
{
  String ans = "";

  while (n != 0)
  {
    int rem = 0;

    char ch;
    rem = n % 16;

    if (rem < 10)
    {
      ch = rem + 48;
    }
    else
    {
      ch = rem + 55;
    }

    ans += ch;
    n = n / 16;
  }

  int i = 0, j = ans.length() - 1;
  while (i <= j)
  {
    char tempChar = ans[i];
    ans[i] = ans[j];
    ans[j] = tempChar;
    i++;
    j--;
  }
  return ans;
}

void setup()
{
  Serial.begin(9600);
  pinMode(HEX_PIN, INPUT);
  pinMode(DEC_PIN, INPUT);
};

void loop()
{
  // Loop until input only has 0's and 1's
  while (!isInputValid)
  {
    Serial.print("Enter a binary number: ");
    // Wait for input
    while (Serial.available() == 0)
    {
    }
    input = Serial.readString();
    Serial.println(input);

    // Store length to
    inputLen = input.length() - 1;
    isInputValid = true;

    for (int i = 0; i < inputLen; ++i)
    {
      char x = input[i];
      if (x == '1')
      {
        // Bit-shift to convert binary to decimal
        int n = 1 << (inputLen - i - 1);
        Serial.println(n);
        decimalOutput += n;
      }
      else if (x == '0')
      {
        // no-op
      }
      else
      {
        // Error - loop again
        Serial.print("Invalid character: ");
        Serial.println(x);
        isInputValid = false;
      }
    }
  }

  // Prompt so user knows input was successful
  Serial.println("Select a button.");

  // Wait for a button input
  while (true)
  {
    // Check inputs
    hexButtonState = digitalRead(HEX_PIN);
    decButtonState = digitalRead(DEC_PIN);

    // Outputs
    if (hexButtonState)
    {
      Serial.print("Hexadecimal: ");
      Serial.println(decToHexa(decimalOutput));
      break;
    }
    else if (decButtonState)
    {
      Serial.print("Decimal: ");
      Serial.println(decimalOutput);
      break;
    }
  }

  // Reset for next run
  isInputValid = false;
  decimalOutput = 0;

  // Line break b/w runs
  Serial.println();
}