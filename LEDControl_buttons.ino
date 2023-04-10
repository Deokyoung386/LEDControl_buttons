const int button1 = 8;
const int button2 = 9;
const int led1 = 12;
const int led2 = 13;
const int led3 = 6;

int cnt = 0;

void setup() {
  // initialize digital pin LED_BUILTIN as an output.
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
}

// the loop function runs over and over again forever
void loop() {

  int buttonstate1 = digitalRead(button1);
  int buttonstate2 = digitalRead(button2);

  if (digitalRead(button1) == HIGH && digitalRead(button2) == HIGH) {
    if (cnt == 0) {
      digitalWrite(led1, HIGH);  // turn the LED on (HIGH is the voltage level)
      //delay(1000);               // wait for a second
      digitalWrite(led2, HIGH);  // turn the LED off by making the voltage LOW
      //delay(1000);
      digitalWrite(led3, HIGH);
      //delay(1000);
      cnt = 1;
    } 
    else {
      digitalWrite(led1, LOW);
      digitalWrite(led2, LOW);
      digitalWrite(led3, LOW);
      cnt = 0;
    }
    while(digitalRead(button1) == LOW && digitalRead(button2) == LOW);
  }

  // if (buttonstate1 == HIGH && buttonstate2 == HIGH) {
  //   digitalWrite(led1, HIGH);  // turn the LED on (HIGH is the voltage level)
  //   //delay(1000);               // wait for a second
  //   digitalWrite(led2, HIGH);  // turn the LED off by making the voltage LOW
  //   //delay(1000);
  //   digitalWrite(led3, HIGH);
  //   delay(1000);
  //   cnt++;  // cnt = cnt + 1;
  // }

//delay(3000);
}
