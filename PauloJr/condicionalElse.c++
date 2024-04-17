#define SENHA "1234"  // Senha válida

void setup() {
  Serial.begin(9600);  // Inicializa a comunicação serial
}

void loop() {
  String senhaInserida = "1234";  // Simulação da entrada da senha

  if (senhaInserida == SENHA) {
    Serial.println("Acesso Permitido");
  } else {
    Serial.println("Acesso Negado");
  }

  delay(1000);  // Aguarda 1 segundo
}
