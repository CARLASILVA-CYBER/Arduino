void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available()) {
    String comando = Serial.readStringUntil('\n');
    if (comando == "LER_VALOR") {
      int valorSensor = random(20, 80); // Simula leitura de sensor
      Serial.println(valorSensor);
    }
  }
}
