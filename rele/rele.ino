const int RELE = 10;

void setup() {
  Serial.begin(9600);
  pinMode(RELE, OUTPUT);

}

void loop() {
  String valor = Serial.readString();

 if(valor && valor != ""){
  if(valor == "ligar"){
    digitalWrite(RELE, HIGH);
   }else if(valor == "desligar"){
    digitalWrite(RELE, LOW);   
   }else{
    Serial.println("Comando inválido"); 
   }
  }
}
