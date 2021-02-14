const int pinq=8;
void setup() {
  pinMode(pinq,OUTPUT);

}
int P=1000;
void loop() {
  if(P <=0){
    delay(2000);
    P=1000;
  }
  else{P=P-500;
  }
  digitalWrite (pinq,HIGH);
  delay(P);
  digitalWrite (pinq,LOW);
  delay(P);
  }
  
