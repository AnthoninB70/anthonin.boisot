int buttonPin = 2;

void setup() {
  pinMode(buttonPin, INPUT);
  Serial.begin(9600);
}

void loop() {
  int buttonState = digitalRead(buttonPin);
  
  if (buttonState == HIGH) {
    Serial.println("Le bouton est enfoncé");
  } else {
    Serial.println("Le bouton n'est pas enfoncé");
  }
  
  delay(100);
}
