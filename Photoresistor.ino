void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorRead = analogRead(A0);

  if(sensorRead<200){
    sensorRead = 200;
  }
  else if(sensorRead> 600){
    sensorRead = 600;
  }
  int ledblink = map(sensorRead, 200, 600, 0, 255);
  Serial.println(sensorRead);
  analogWrite(9, ledblink);
  delay(1);
}
