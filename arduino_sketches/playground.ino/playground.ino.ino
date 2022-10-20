int led_pin = 7;
int button_pin = 2;
bool led_status = LOW;


void setup() {
  pinMode(button_pin, INPUT_PULLUP);
}


void loop() {
  led_status = digitalRead(button_pin);

  if (led_status == HIGH) {
    digitalWrite(led_pin, HIGH);
  } else {
    digitalWrite(led_pin, LOW);
  }
}
