#define ENA 6
#define ENB 5

#define IN1 7
#define IN2 8
#define IN3 9
#define IN4 11


void setup() {
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(IN3, OUTPUT);
  pinMode(IN4, OUTPUT);

  pinMode(ENA, OUTPUT);
  pinMode(ENB, OUTPUT);

  Serial.begin(9600);
}

void loop() {
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  digitalWrite(IN3, LOW);
  digitalWrite(IN4, HIGH);

  for( int i = 255; i >= 0; i-- ) {
    analogWrite(ENB, i);
    analogWrite(ENA, i);

    delay( 20 );
  }


}
