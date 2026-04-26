void setup() {
  pinMode(13, OUTPUT);
  pinMode(12, OUTPUT); // criadas as 4 saidas do led
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);

  pinMode(7, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP); // criadas as 4 entradas dos botões
  pinMode(5, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);

  }

void loop() {

  if (digitalRead(7) == LOW){
    digitalWrite(13, HIGH);
    delay(1000);
    digitalWrite(13, LOW);
  }

  if (digitalRead(6) == LOW){
    digitalWrite(12, HIGH);
    delay(1000);
    digitalWrite(12, LOW);
  }

  if (digitalRead(5) == LOW){
    digitalWrite(11, HIGH);
    delay(1000);
    digitalWrite(11, LOW);
  }  

  if (digitalRead(4) == LOW){
    digitalWrite(10, HIGH);
    delay(1000);
    digitalWrite(10, LOW);
  }
}
