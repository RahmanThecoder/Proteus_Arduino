#define LEDA 1
#define LEDB 2
#define LEDC 3
#define LEDD 4
#define LEDE 5
#define LEDF 6
#define LEDG 7


void setup(){

  pinMode (LEDA,OUTPUT);
  pinMode (LEDB,OUTPUT);
  pinMode (LEDC,OUTPUT);
  pinMode (LEDD,OUTPUT);
  pinMode (LEDE,OUTPUT);
  pinMode (LEDF,OUTPUT);
  pinMode (LEDG,OUTPUT);
}

void loop(){

  digitalWrite(LEDA,HIGH);
  digitalWrite(LEDB,HIGH);
  digitalWrite(LEDC,HIGH);
  digitalWrite(LEDD,HIGH);
  digitalWrite(LEDE,HIGH);
  digitalWrite(LEDF,HIGH);
  digitalWrite(LEDG,HIGH);
delay(500);
// for number 1
  digitalWrite(LEDA,LOW);
  digitalWrite(LEDB,HIGH);
  digitalWrite(LEDC,HIGH);
  digitalWrite(LEDD,LOW);
  digitalWrite(LEDE,LOW);
  digitalWrite(LEDF,LOW);
  digitalWrite(LEDG,LOW);
delay(300);

// for  number 2
  digitalWrite(LEDA,HIGH);
  digitalWrite(LEDB,HIGH);
  digitalWrite(LEDC,LOW);
  digitalWrite(LEDD,HIGH);
  digitalWrite(LEDE,HIGH);
  digitalWrite(LEDF,LOW);
  digitalWrite(LEDG,HIGH);
delay(300);

// for number 3

  digitalWrite(LEDA,HIGH);
  digitalWrite(LEDB,HIGH);
  digitalWrite(LEDC,HIGH);
  digitalWrite(LEDD,HIGH);
  digitalWrite(LEDE,LOW);
  digitalWrite(LEDF,LOW);
  digitalWrite(LEDG,HIGH);
delay(300);

// for number 4
  digitalWrite(LEDA,LOW);
  digitalWrite(LEDB,HIGH);
  digitalWrite(LEDC,HIGH);
  digitalWrite(LEDD,LOW);
  digitalWrite(LEDE,LOW);
  digitalWrite(LEDF,HIGH);
  digitalWrite(LEDG,HIGH);
delay(300);
// for number 5
  digitalWrite(LEDA,HIGH);
  digitalWrite(LEDB,LOW);
  digitalWrite(LEDC,HIGH);
  digitalWrite(LEDD,HIGH);
  digitalWrite(LEDE,LOW);
  digitalWrite(LEDF,HIGH);
  digitalWrite(LEDG,HIGH);
delay(500);
// for number 6
  digitalWrite(LEDA,HIGH);
  digitalWrite(LEDB,LOW);
  digitalWrite(LEDC,HIGH);
  digitalWrite(LEDD,HIGH);
  digitalWrite(LEDE,HIGH);
  digitalWrite(LEDF,HIGH);
  digitalWrite(LEDG,HIGH);
delay(300);
// for number 7
  digitalWrite(LEDA,HIGH);
  digitalWrite(LEDB,HIGH);
  digitalWrite(LEDC,HIGH);
  digitalWrite(LEDD,LOW);
  digitalWrite(LEDE,LOW);
  digitalWrite(LEDF,LOW);
  digitalWrite(LEDG,LOW);
delay(300);
// for number 8
  digitalWrite(LEDA,HIGH);
  digitalWrite(LEDB,HIGH);
  digitalWrite(LEDC,HIGH);
  digitalWrite(LEDD,HIGH);
  digitalWrite(LEDE,HIGH);
  digitalWrite(LEDF,HIGH);
  digitalWrite(LEDG,HIGH);
delay(300);
// for number 9
  digitalWrite(LEDA,HIGH);
  digitalWrite(LEDB,HIGH);
  digitalWrite(LEDC,HIGH);
  digitalWrite(LEDD,LOW);
  digitalWrite(LEDE,LOW);
  digitalWrite(LEDF,HIGH);
  digitalWrite(LEDG,HIGH);
delay(500);








}
