
int LED = D2;    
int ButtonPin = D0;


void setup() {
  // put your setup code here, to run once:
  pinMode(LED, OUTPUT);
  pinMode(ButtonPin,INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
  int buttonValue = digitalRead(ButtonPin);
  digitalWrite(LED, buttonValue);

}
