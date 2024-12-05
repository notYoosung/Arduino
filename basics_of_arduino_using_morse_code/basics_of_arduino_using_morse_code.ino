#define LED_RED 12
#define LED_BLUE 11
#define LED_ALT 10
void setup() {
  pinMode(LED_RED, OUTPUT);
  digitalWrite(LED_RED, LOW);
  pinMode(LED_BLUE, OUTPUT);
  digitalWrite(LED_BLUE, LOW);
  pinMode(LED_ALT, OUTPUT);
  digitalWrite(LED_ALT, LOW);
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
    int* v = morse[int(toupper(name[i])) - 65];
    for (int j = 0; j < sizeof(*v); j++) {
      delay(300);
      if (v[j] == 2) {
        digitalWrite(LED_RED, HIGH);
        delay(300);
        digitalWrite(LED_RED, LOW);
      } else if (v[j] == 1) {
        digitalWrite(LED_BLUE, HIGH);
        delay(300);
        digitalWrite(LED_BLUE, LOW);
      }
    }
    delay(300);
  }
  digitalWrite(LED_ALT, HIGH);
  delay(1000);
  digitalWrite(LED_ALT, LOW);
  delay(300);
}