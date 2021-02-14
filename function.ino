void setup() {
  Serial.begin(9600);
 
}

void loop() {
 int p=5;
 int q=10;
 int r;

  r=Jawaban(p,q);
  Serial.println(r);
  delay(1000);
  
}
  int Jawaban(int p,int q){
    int Hasil;
    Hasil= p*q;
    return Hasil;
  }
