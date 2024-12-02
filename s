#define LED_PIN 12
void setup()
{
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);
  digitalWrite(LED_BUILTIN, LOW);
}


char name[] = "BL";
int morse[26][8] = {
  {2, 1},
  {1, 2, 2, 2},
  {1, 2, 1, 2},
  {1, 2, 2},
  {2},
  {2, 2, 1, 2},
  {1, 1, 2},
  {2, 2, 2, 2},
  {2, 2},
  {2, 1, 1, 1},
  {1, 2, 1},
  {2, 1, 2, 2},
  {1, 1},
  {1, 2},
  {1, 1, 1},
  {2, 1, 1, 2},
  {1, 1, 2, 1},
  {2, 1, 2},
  {2, 2, 2},
  {1},
  {2, 2, 1},
  {2, 2, 2, 1},
  {2, 1, 1},
  {1, 2, 2, 1},
  {1, 2, 1, 1},
  {1, 1, 2, 2},
};



void loop()
{
  int j;
  for (int i = 0; i < sizeof(name) - 1; i++) {
    int* v = morse[int(toupper(name[i])) - 66];
    for (j = 0; j < sizeof(v) - 1; j++) {
      switch (v[j]) {
        case 2:
          digitalWrite(LED_BUILTIN, HIGH);
          delay(200);
          digitalWrite(LED_BUILTIN, LOW);
          break;
        case 1:
          digitalWrite(LED_BUILTIN, HIGH);
          delay(600);
          digitalWrite(LED_BUILTIN, LOW);
          break;
      }
    }
    delay(1000);
  }
  delay(2000);

  return 0;
}
