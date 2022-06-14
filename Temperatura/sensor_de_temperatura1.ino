//Declaração das variáveis
byte lamp[] = {2, 4, 6};
int sensor = A0;
float temp = 0;
float temp2 = 0;

// Inicialização das variáveis
void setup() {
  for (int i = 0; i <= sizeof(lamp); i++){
    pinMode(lamp[i], OUTPUT); 
  }
  pinMode(sensor, INPUT);
 // analogReference(INTERNAL);
  Serial.begin(9600);
 }

// Execução
void loop(){
  temp2 = analogRead(sensor);
  float tensao = 5 * temp2;
  tensao = tensao/= 1024;
  temp = (tensao - 0.5) * 100;
  
  Serial.print("Temperatura:");
  Serial.println(temp);
  Serial.println("C");
  
  if(temp >= -40 && temp <=20) {
    digitalWrite(lamp[0], 1);
  }
  
  else{
    digitalWrite(lamp[0], 0);
  }
  
  if(temp >=21 && temp <=60){
    digitalWrite(lamp[1], 1);
    }
  
  else{
     digitalWrite(lamp[1], 0);
  }
  
  if(temp >=61 && temp <=100){
   digitalWrite(lamp[1], 1);
   }
  
  else{
  digitalWrite(lamp[2], 0);
  }
  
  if(temp >=100){
    
     
  }
}
