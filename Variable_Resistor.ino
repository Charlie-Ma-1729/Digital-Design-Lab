void setup() {
  // put your setup code here, to run once:
  pinMode(12, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorRead = analogRead(A0);

  // if(sensorRead<200){
  //   sensorRead = 200;
  // }
  // else if(sensorRead> 600){
  //   sensorRead = 600;
  // }
  // int ledblink = map(sensorRead, 200, 600, 0, 255);
  digitalWrite(12, HIGH);
  delay(sensorRead);
  digitalWrite(12, LOW);
  delay(sensorRead);
  Serial.println(sensorRead);
  analogWrite(3, sensorRead);
  delay(1);
}
