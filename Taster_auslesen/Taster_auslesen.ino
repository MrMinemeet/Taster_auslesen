const int tasterPin = 2;   // GPIO34 --> Taster

const int ledBlau = 8;     // GPIO25 --> Blaue LED
const int ledRot = 9;      // GPIO23 --> Rote LED

void setup() {
  // Taster als input setzen
  pinMode(tasterPin, INPUT);

  // LEDs als output setzen
  pinMode(ledBlau, OUTPUT);
  pinMode(ledRot, OUTPUT);
}

void loop() {
  // Taster Abfrage
  if(digitalRead(tasterPin) == HIGH)
  {
    // Taster gedrückt
    digitalWrite(ledBlau,HIGH);
    digitalWrite(ledRot, LOW);
  }
  else
  {
    // Taster nicht gedrückt
    digitalWrite(ledBlau,LOW);
    digitalWrite(ledRot, HIGH);
  }
}
