void setup() {
  pinMode(7, OUTPUT); // Kırmızı
  pinMode(4, OUTPUT); // Mavi
  pinMode(2, OUTPUT); // Beyaz
}

void loop() {
  // Kırmızı hızlı flaş
  for (int i = 0; i < 4; i++) {
    digitalWrite(7, HIGH);
    delay(80);
    digitalWrite(7, LOW);
    delay(80);
  }

  // Mavi hızlı flaş
  for (int i = 0; i < 4; i++) {
    digitalWrite(4, HIGH);
    delay(80);
    digitalWrite(4, LOW);
    delay(80);
  }

  // Beyaz kısa flaş
  digitalWrite(2, HIGH);
  delay(100);
  digitalWrite(2, LOW);
  delay(100);

  // Kırmızı ve mavi birlikte
  for (int i = 0; i < 3; i++) {
    digitalWrite(7, HIGH);
    digitalWrite(4, HIGH);
    delay(100);

    digitalWrite(7, LOW);
    digitalWrite(4, LOW);
    delay(100);
  }

  // Beyaz ve kırmızı
  digitalWrite(2, HIGH);
  digitalWrite(7, HIGH);
  delay(100);

  digitalWrite(2, LOW);
  digitalWrite(7, LOW);
  delay(100);

  // Beyaz ve mavi
  digitalWrite(2, HIGH);
  digitalWrite(4, HIGH);
  delay(100);

  digitalWrite(2, LOW);
  digitalWrite(4, LOW);
  delay(100);

  delay(150);
}
