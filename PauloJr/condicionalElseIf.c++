void setup() {
  Serial.begin(9600);  // Inicializa a comunicação serial
}

void loop() {
  int temperatura = 22;  // Simulação da leitura da temperatura

  if (temperatura < 10) {
    Serial.println("Fria");
  } else if (temperatura < 25) {
    Serial.println("Agradável");
  } else {
    Serial.println("Quente");
  }

  delay(1000);  // Aguarda 1 segundo
}
