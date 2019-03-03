int IN3=3; // Conexion a puente H 
int IN4=4; // Conexión IN4 Diodo 1 (Electroválvula 1) 
int IN5=5; // Conexión IN5 Diodo 2 (Electroválvula 2) 
int LightStat=false; // Bool de estado para Electroválvula 1 
int LightStat2=false; // Bool de estado para Electroválvula 2 
int count=0;   // Contador para el tiempo 

int fnResultado (int porcentaje){    
  if (porcentaje<50){     
    digitalWrite (IN4, HIGH); 
    LightStat=true; 
    } else {      
      digitalWrite (IN4, LOW);  
      LightStat=false;      
      }      
      return LightStat;  
  }
  
int fnResultado2 (int porcentaje2) {    
  if (porcentaje2<50){ 
      digitalWrite (IN5, HIGH); 
      LightStat2=true;   
      } else {      
        digitalWrite (IN5, LOW);    
        LightStat2=false;     
      }      
      return LightStat2;   
  } 
  
 void setup() { 
 Serial.begin(9600); 
  pinMode (IN3, OUTPUT); //Salida a puente H Motor   
  pinMode (IN4, OUTPUT); //Salida a Electroválvula 1   
  pinMode (IN5, OUTPUT); // Salida a Electroválvula 2   
  int count=0; 
 } 
 
 void loop() {  
  count= count + 1;   
  
  int valor = analogRead(A0);               // Lectura para Sensor 1   
  int valor2 = analogRead(A1);              // Lectura para Sensor 2   
  delay(1000);                              // Tiempo entre mediciones 
   
  int porcentaje;  
  porcentaje = map(valor, 0, 870, 0, 100);  // Porcentaje Sensor 1   
  int porcentaje2;   
  porcentaje2= map(valor2, 0, 870, 0, 100); // Porcentaje Sensor 2      
  int resultado = fnResultado(porcentaje);    
  int resultado2= fnResultado2(porcentaje2);    
  
   if (LightStat||LightStat2){     
    digitalWrite(IN3, HIGH);    
    } else {
      digitalWrite(IN3, LOW);
    }      
    
   Serial.print(count);   
   Serial.print(',');   
   Serial.print(porcentaje);   
   Serial.print(',');   
   Serial.print(porcentaje2);    
   Serial.println(); 
}
