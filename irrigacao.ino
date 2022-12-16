
const int pinoSensorUmidade = A0;
const int rele = 3;
int LED = 8;
int umidade_solo;

void setup(){
  Serial.begin(9600);
  pinMode(rele,OUTPUT);
  pinMode(LED,OUTPUT);
  pinMode(pinoSensorUmidade, INPUT);
  
  
   
}
 
void loop(){
  umidade_solo = analogRead(pinoSensorUmidade);
  if (umidade_solo < 600) {
    Serial.println(umidade_solo);
    digitalWrite(rele,HIGH);
    
    digitalWrite(LED,LOW);
  }
  else {
    Serial.println(umidade_solo);
    digitalWrite(rele,LOW);
    digitalWrite(LED,HIGH);
  }

  
    delay(1000);
}