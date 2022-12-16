
const int pinoSensorUmidade = A0; #conexao do sensor de umidade
const int rele = 3; #conexao do rele
int LED = 8; #conexao do LED
int umidade_solo; #variavel para umidade do solo

void setup(){
  Serial.begin(9600);
  pinMode(rele,OUTPUT); #Definindo que o rele é um sensor de OUTPUT
  pinMode(LED,OUTPUT); #Definindo que o LED é um sensor de OUTPUT
  pinMode(pinoSensorUmidade, INPUT); #Definindo que o pinoSensorUmidade é um sensor de INPUT
  
  
   
}
 
void loop(){
  umidade_solo = analogRead(pinoSensorUmidade);
  if (umidade_solo < 600) { #Parametro usado para ver se a planta está umida
    Serial.println(umidade_solo); 
    digitalWrite(rele,HIGH); #Acionamento do rele 
    
    digitalWrite(LED,LOW); #Desligamento do LED 
  }
  else {
    Serial.println(umidade_solo);
    digitalWrite(rele,LOW); #Desligamento do rele 
    digitalWrite(LED,HIGH);#Desligamento do LED 
  }

  
    delay(1000); #Tempo de delay da medicao
}