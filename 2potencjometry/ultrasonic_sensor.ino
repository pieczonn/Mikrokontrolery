#include <Servo.h>

const int pingPin = 9;

void setup() {
  Serial.begin(9600);
}

void loop() {
  long czas;
  float odleglosc;

  pinMode(pingPin, OUTPUT);
  digitalWrite(pingPin, LOW);
  delayMicroseconds(2);
  digitalWrite(pingPin, HIGH);
  delayMicroseconds(5);
  digitalWrite(pingPin, LOW);

  pinMode(pingPin, INPUT);
  czas = pulseIn(pingPin, HIGH);

  odleglosc = czas / 58.0;

  Serial.print("Czas: ");
  Serial.print(czas);
  Serial.print(" us | Odleglosc: ");
  Serial.print(odleglosc);
  Serial.println(" cm");

  delay(100);
}