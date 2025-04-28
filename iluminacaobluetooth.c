#include <SoftwareSerial.h> //Biblioteca para conectar com o bluetooth

SoftwareSerial serialdobluetooth(8,9); // Portas para o serial do bluetooth (RX, TX)

#define led1 2 // Pinos digitais dos leds
#define led2 3
#define led3 4
#define led4 5
#define led5 6
#define led6 7
#define led7 11
#define led8 12




int valordobluetooth; // Variável que vai ler o valor enviado pelo bluetooth 

void setup() 

{
  serialdobluetooth.begin(9600); //Início da serial do bluetooth
  pinMode(led1, OUTPUT); //Ligando a saída dos leds
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(led4, OUTPUT);
  pinMode(led5, OUTPUT);
  pinMode(led6, OUTPUT);
  pinMode(led7, OUTPUT);
  pinMode(led8, OUTPUT);
  digitalWrite(led1,LOW); //Garantir que os LEDs estejam desligados antes do comando
  digitalWrite(led2,LOW);
  digitalWrite(led3,LOW);
  digitalWrite(led4,LOW);
  digitalWrite(led5,LOW);
  digitalWrite(led6,LOW);
  digitalWrite(led7,LOW);
  digitalWrite(led8,LOW);
  
  
}

void loop() {
  if (serialdobluetooth.available()) //Se o bluetooth estiver funcionando, vai ser lido o "valor", para reproduzir o comando
  {
  valordobluetooth = serialdobluetooth.read();
  }

 if (valordobluetooth=='A') //Leitura dos valores para saber se deve acender ou não o LED
 {
  digitalWrite (led1,HIGH);
  }

    if (valordobluetooth=='a')
 {
  digitalWrite (led1,LOW);
  }

    if (valordobluetooth=='B')
 {
  digitalWrite (led2,HIGH);
  }

    if (valordobluetooth=='b')
 {
  digitalWrite (led2,LOW);
 }

 if (valordobluetooth=='C')
 {
  digitalWrite (led3,HIGH);
  }

    if (valordobluetooth=='c')
 {
  digitalWrite (led3,LOW);
  }

if (valordobluetooth=='D')
 {
  digitalWrite (led4,HIGH);
  }

    if (valordobluetooth=='d')
 {
  digitalWrite (led4,LOW);
  }

if (valordobluetooth=='E')
 {
  digitalWrite (led5,HIGH);
  }

    if (valordobluetooth=='e')
 {
  digitalWrite (led5,LOW);
  }

if (valordobluetooth=='F')
 {
  digitalWrite (led6,HIGH);
  }

    if (valordobluetooth=='f')
 {
  digitalWrite (led6,LOW);
  }

if (valordobluetooth=='G')
 {
  digitalWrite (led7,HIGH);
  }

    if (valordobluetooth=='g')
 {
  digitalWrite (led7,LOW);
  }

if (valordobluetooth=='H')
 {
  digitalWrite (led8,HIGH);
  }

    if (valordobluetooth=='h')
 {
  digitalWrite (led8,LOW);
  }

 
  
  
if (valordobluetooth=='J')
 {
  digitalWrite (led1,HIGH);
  digitalWrite (led2,HIGH);
  digitalWrite (led3,HIGH);
  digitalWrite (led4,HIGH);
  digitalWrite (led5,HIGH);
  digitalWrite (led6,HIGH);
  digitalWrite (led7,HIGH);
  digitalWrite (led8,HIGH);
  }
 
    if (valordobluetooth=='j')
 {
  digitalWrite (led1,LOW);
  digitalWrite (led2,LOW);
  digitalWrite (led3,LOW);
  digitalWrite (led4,LOW);
  digitalWrite (led5,LOW);
  digitalWrite (led6,LOW);
  digitalWrite (led7,LOW);
  digitalWrite (led8,LOW);
  }
}