void setup() {
  Serial.begin(9600);  // Inicializa a comunicação serial
}

void loop() {
  int idade = 20;  // Simulação da idade

  if (idade >= 18) {
    Serial.println("Maior de Idade");
  }

  delay(1000);  // Aguarda 1 segundo
}
