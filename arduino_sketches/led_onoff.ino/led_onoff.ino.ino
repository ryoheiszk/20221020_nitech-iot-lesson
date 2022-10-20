int led_pin = 7;
int button_pin = 2;
int led_status = LOW;

int old_status = HIGH;
int count = 0;


void setup() {
  pinMode(led_pin, OUTPUT);
  pinMode(button_pin, INPUT_PULLUP);
}


void loop() {
  int now_status = digitalRead(button_pin);

  if (now_status == LOW && old_status == HIGH && count == 0) {
    count = -20000;
    led_status =! led_status;
    digitalWrite(led_pin, led_status);
  } else if (now_status == HIGH && old_status == LOW && count == 0) {
    count = -20000;
  }
  if (count < 0) count++;
    old_status = now_status;
}
