void setup() {
  Serial.begin(9600);
}

void loop() {
  Serial.println("LER_VALOR"); // Envia comando ao escravo
  delay(1000);
  if (Serial.available()) {
    String resposta = Serial.readStringUntil('\n');
    Serial.println("Recebido: " + resposta);
  }
}
