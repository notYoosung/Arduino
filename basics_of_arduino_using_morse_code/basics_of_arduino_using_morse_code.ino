#define LED_RED 12
#define LED_BLUE 11
void setup() {
  pinMode(LED_RED, OUTPUT);
  digitalWrite(LED_RED, LOW);
  pinMode(LED_BLUE, OUTPUT);
  digitalWrite(LED_BLUE, LOW);
}


char name[] = "Z";
int morse[26][4] = {
  { 2, 1 },
  { 1, 2, 2, 2 },
  { 1, 2, 1, 2 },
  { 1, 2, 2 },
  { 2 },
  { 2, 2, 1, 2 },
  { 1, 1, 2 },
  { 2, 2, 2, 2 },
  { 2, 2 },
  { 2, 1, 1, 1 },
  { 1, 2, 1 },
  { 2, 1, 2, 2 },
  { 1, 1 },
  { 1, 2 },
  { 1, 1, 1 },
  { 2, 1, 1, 2 },
  { 1, 1, 2, 1 },
  { 2, 1, 2 },
  { 2, 2, 2 },
  { 1 },
  { 2, 2, 1 },
  { 2, 2, 2, 1 },
  { 2, 1, 1 },
  { 1, 2, 2, 1 },
  { 1, 2, 1, 1 },
  { 1, 1, 2, 2 },
};



void loop() {
  for (int i = 0; i < sizeof(name); i++) {
    int* v = morse[int(toupper(name[i])) - 66];
    for (int j = 0; j < sizeof(v); j++) {
      if (v[j] == 2) {
        digitalWrite(LED_RED, HIGH);
        delay(300);
        digitalWrite(LED_RED, LOW);
      } else if (v[j] == 1) {
        digitalWrite(LED_BLUE, HIGH);
        delay(300);
        digitalWrite(LED_BLUE, LOW);
      }
      delay(300);
    }
    delay(300);
  }
  digitalWrite(LED_RED, HIGH);
  digitalWrite(LED_BLUE, HIGH);
  delay(1000);
  digitalWrite(LED_RED, LOW);
  digitalWrite(LED_BLUE, LOW);
  delay(300);
}