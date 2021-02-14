void setup() {
    pinMode(5, OUTPUT);
    Serial.begin(9600);
    while(!Serial);
    Serial.println("Speed 0 to 200");
}

void loop()
{
  if (Serial.available())
  {
  int speed= Serial.parseInt();
  if (speed >= 0 && speed <= 200)
  {
  analogWrite(5,speed);
  delay(1000);
  }
  }}
