
/*PROGRAM FOR LED OPERATION
 * DEVELOPER : AKASH M
 * DATE : 13/01/2020
 * COMPANY : ENVISION
 * VERSION : 3.0
 */
int LEDONE =2;
int LEDTWO =3;
int LEDTHREE =4;
int LEDFOUR =5;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LEDONE,OUTPUT);
  pinMode(LEDTWO,OUTPUT);
  pinMode(LEDTHREE,OUTPUT);
  pinMode(LEDFOUR,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
      digitalWrite(LEDONE,LOW);
      digitalWrite(LEDTWO,LOW);
      digitalWrite(LEDTHREE,LOW);
      digitalWrite(LEDFOUR,LOW);
      delay(500);
      digitalWrite(LEDONE,HIGH);
      digitalWrite(LEDTWO,HIGH);
      digitalWrite(LEDTHREE,HIGH);
      digitalWrite(LEDFOUR,HIGH);
      delay(500);
      
}
