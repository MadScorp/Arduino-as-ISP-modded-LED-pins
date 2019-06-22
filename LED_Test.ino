#define LED_HB    7
#define LED_ERR   9
#define LED_PMODE 8


void setup() {
  // put your setup code here, to run once:
  pinMode(LED_PMODE, OUTPUT);
  pinMode(LED_ERR, OUTPUT);
  pinMode(LED_HB, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  
  digitalWrite(LED_PMODE,HIGH);
  delay(1000);
  digitalWrite(LED_PMODE,LOW);
  delay(1000);

  digitalWrite(LED_ERR,HIGH);
  delay(1000);
  digitalWrite(LED_ERR,LOW);
  delay(1000);
  digitalWrite(LED_ERR,HIGH);
  delay(1000);
  digitalWrite(LED_ERR,LOW);
  delay(1000);
  
  digitalWrite(LED_HB,HIGH);
  delay(1000);
  digitalWrite(LED_HB,LOW);
  delay(1000);
  digitalWrite(LED_HB,HIGH);
  delay(1000);
  digitalWrite(LED_HB,LOW);
  delay(1000);
  digitalWrite(LED_HB,HIGH);
  delay(1000);
  digitalWrite(LED_HB,LOW);
  delay(1000);
}
