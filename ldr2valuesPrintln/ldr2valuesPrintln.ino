void setup() {
  Serial.begin(9600);
  pinMode(A0, INPUT);
  pinMode(A1, INPUT);
}

void loop() {
  int ldr1 = analogRead(A0);
  int ldr2 = analogRead(A1);
  Serial.print(ldr1);
  Serial.print(" , ");
  Serial.println(ldr2);
  delay(100);

}
