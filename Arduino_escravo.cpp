void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    String comando = Serial.readStringUntil('\n');
    if (comando == "LER_VALOR") {
      int valorSimulado = random(0, 100); // Simula valor do sensor
      Serial.println(String(valorSimulado));
    }
  }
}
