void setup() {
  Serial.begin(9600);  // Inicializa a comunicação serial
}

void loop() {
  int temperatura = 32;  // Simulação da temperatura

  if (temperatura > 30) {
    Serial.println("Temperatura Alta");
  }

  delay(1000);  // Aguarda 1 segundo
}
