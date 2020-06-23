 int ledVerde = 2; //Definindo os pinos dos Leds
 int ledVerde2 = 3;
 int ledAmarelo = 4;
 int ledAmarelo2 = 5;
 int ledVermelho = 6;
 int ledVermelho2 = 7; 
 int bomba = 12; //Definindo o pino da bomba d'agua
 int button = 10; //Definindo o pino do push button
 int sensor = A1; //Definindo o pino do sensor de umidade do solo


int buttonValor = 0;
int sensorValor = 0;
 
void setup() {
  // put your setup code here, to run once:

    pinMode(ledVerde, OUTPUT); //Definindo os pinos led como saida(OUTPUT)
    pinMode(ledVerde2, OUTPUT);
    pinMode(ledAmarelo, OUTPUT);
    pinMode(ledAmarelo2, OUTPUT);
    pinMode(ledVermelho, OUTPUT);
    pinMode(ledVermelho2, OUTPUT); 
    pinMode(bomba, OUTPUT); //Definindo o pino da bomba d'agua como saida(OUTPUT)
    pinMode(button, INPUT); //Definindo o pino do push button como entrada(INPUT)
    pinMode(sensor, INPUT); //Definindo o pino do sensor de umidade como entrada(INPUT)

}

void loop() {
  // put your main code here, to run repeatedly:

    buttonValor = digitalRead(button);
    sensorValor = analogRead(sensor);

      if(sensorValor <= 200){
        
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledVerde2, LOW);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledAmarelo2, LOW);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVermelho2, LOW);
  }

      if(sensorValor > 200 && sensorValor < 400){
        
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledVerde2, HIGH);
    digitalWrite(ledAmarelo, LOW);
    digitalWrite(ledAmarelo2, LOW);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVermelho2, LOW);
  }

      if(sensorValor > 400 && sensorValor < 600){
        
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledVerde2, HIGH);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledAmarelo2, LOW);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVermelho2, LOW);
  }

      if(sensorValor > 600 && sensorValor < 800){
        
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledVerde2, HIGH);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledAmarelo2, HIGH);
    digitalWrite(ledVermelho, LOW);
    digitalWrite(ledVermelho2, LOW);
  }

      if(sensorValor > 800 && sensorValor < 911){
        
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledVerde2, HIGH);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledAmarelo2, HIGH);
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVermelho2, LOW);

    digitalWrite(bomba, HIGH);
    delay(2000);
  }

     if(sensorValor > 911 && sensorValor <= 1023){
        
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledVerde2, HIGH);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledAmarelo2, HIGH);
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVermelho2, HIGH);

    digitalWrite(bomba, HIGH);
    delay(2000);
  }

    if(buttonValor == 1){
      
    digitalWrite(bomba, HIGH);
      
    digitalWrite(ledVerde, HIGH);
    digitalWrite(ledVerde2, HIGH);
    digitalWrite(ledAmarelo, HIGH);
    digitalWrite(ledAmarelo2, HIGH);
    digitalWrite(ledVermelho, HIGH);
    digitalWrite(ledVermelho2, HIGH);
    delay(2000);
  }
}
