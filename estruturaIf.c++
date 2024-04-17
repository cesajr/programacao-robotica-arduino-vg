int value = 10;  // Valor para verificação

void setup() {
  Serial.begin(9600);  // Inicializa a comunicação serial
}

void loop() {
  if (value > 5) {  // Verifica se o valor é maior que 5
    Serial.println("Valor é maior que 5");  // Imprime no monitor serial se a condição for verdadeira
  }
  
  delay(1000);  // Aguarda 1 segundo
}
