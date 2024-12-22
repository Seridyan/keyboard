//Board  XIAO RA4M1
#include <Keyboard.h>

void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  //XIAO RA4M1 used Digital Inputs
  pinMode(0, INPUT);
  pinMode(1, INPUT);
  pinMode(2, INPUT);
  pinMode(3, INPUT);
  Keyboard.begin();
  delay (1000);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(LED_BUILTIN, HIGH);
  if (digitalRead(0) == HIGH){
    digitalWrite(LED_BUILTIN, LOW);
  //Edit Yellow Key to your prefered Letter
    Keyboard.write('A');
    delay(400);
    Keyboard.releaseAll();
  }
  digitalWrite(LED_BUILTIN, HIGH);
  if (digitalRead(1) == HIGH){
    digitalWrite(LED_BUILTIN, LOW);
    //Edit Blue Key to your prefered Letter
    Keyboard.write('B');
    delay(400);
    Keyboard.releaseAll();
  }
  digitalWrite(LED_BUILTIN, HIGH);
  if (digitalRead(2) == HIGH){
    digitalWrite(LED_BUILTIN, LOW);
    //Edit Red Key to your prefered Letter
    Keyboard.write('C');
    delay(400);
    Keyboard.releaseAll();
  }
  digitalWrite(LED_BUILTIN, HIGH);
  if (digitalRead(3) == HIGH){
    digitalWrite(LED_BUILTIN, LOW);
    //Edit Black Key to your prefered Letter
    Keyboard.write('D');
    delay(400);
    Keyboard.releaseAll();
  }

}
