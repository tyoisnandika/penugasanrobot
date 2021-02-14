void setup() {
  pinMode(9,OUTPUT);


}

void loop() {
  int p; 
  for(p=0; p<100; p++)
  {analogWrite(10,p);} 
  
}
