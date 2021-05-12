int trigger = 2;
int buzzpin = 8;
int echo = 3;
int duration = 0;
int distance = 0;
void setup() {
  Serial.begin(9600);
  pinMode(2, OUTPUT);
  pinMode(3, INPUT);
  pinMode(buzzpin, OUTPUT);
  // put your setup code here, to run once:
}
void loop() {
  // put your main code here, to run repeatedly:
  delayMicroseconds(2);
  digitalWrite(trigger, LOW);
  delayMicroseconds(10);
  digitalWrite(trigger, HIGH);
  duration = pulseIn(echo , HIGH);
  distance = (duration / (58));
  Serial.println(distance);
  digitalWrite(buzzpin, HIGH);
  if (distance < 10) {
    delay(10);
    digitalWrite(buzzpin, LOW);
  }
  else if (distance < 20) {
    delay(50);
    digitalWrite(buzzpin, LOW);
  }
  else if (distance < 30) {
    delay(100);
    digitalWrite(buzzpin, LOW);
  }
  else if (distance < 50) {
    delay(300);
    digitalWrite(buzzpin, LOW);
  }
  else {
    delay(500);
    digitalWrite(buzzpin, LOW);
  }


}
