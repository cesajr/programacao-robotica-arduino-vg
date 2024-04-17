int value = 10;  // Valor para verificação

void setup() {
  Serial.begin(9600);  // Inicializa a comunicação serial
}

void loop() {
  if (value > 15) {  // Verifica se o valor é maior que 15
    Serial.println("Valor é maior que 15");  // Imprime no monitor serial se a condição for verdadeira
  } else if (value > 10) {  // Se a condição acima for falsa, verifica se o valor é maior que 10
    Serial.println("Valor é maior que 10, mas menor ou igual a 15");  // Imprime no monitor serial se a condição for verdadeira
  } else {
    Serial.println("Valor é 10 ou menor");  // Imprime no monitor serial se nenhuma das condições acima for verdadeira
  }
  
  delay(1000);  // Aguarda 1 segundo
}
