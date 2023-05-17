int ledPin1 = 3;
int ledPin2 = 4;
int ledPin3 = 5;

void setup() {
  pinMode(ledPin1, OUTPUT);
  pinMode(ledPin2, OUTPUT);
  pinMode(ledPin3, OUTPUT);
}

void loop() {
  digitalWrite(ledPin1, HIGH);
  delay(1000);
  digitalWrite(ledPin1, LOW);

  digitalWrite(ledPin2, HIGH);
  delay(1000);
  digitalWrite(ledPin2, LOW);
  
  digitalWrite(ledPin3, HIGH);
  delay(1000);
  digitalWrite(ledPin3, LOW);
  
  delay(1000);
}
