#define powerbtn 0
#define mosfet 1
#define ledboard 8

void setup() {
  Serial.begin(115200);
  pinMode(powerbtn, INPUT);
  pinMode(mosfet, OUTPUT);
  pinMode(ledboard, OUTPUT);

  digitalWrite(mosfet, HIGH);
  digitalWrite(ledboard, HIGH);
  delay(1000);
}

void loop() {
  Serial.println(analogRead(powerbtn));
  if(analogRead(powerbtn)<1000){
    
    digitalWrite(ledboard, LOW);
    digitalWrite(mosfet, LOW);

    
  }

}
