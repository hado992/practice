#include <Servo.h>

const int button_pin = 2;
const int touch_pin = 3;
const int servo_pin = 5;
const int buzzer_pin = 7;

Servo myservo;

unsigned long start_time = 0;
unsigned long added_time = 0;
unsigned long wait_time = 10000/2;

bool timer_started = false;
bool motor_started = false;

int current_state = LOW;
int previous_state = LOW;

int pin_status(int pin) {
  return digitalRead(pin);
}

void setup() {
  pinMode(button_pin, INPUT_PULLUP);
  pinMode(touch_pin, INPUT);
  pinMode(buzzer_pin, OUTPUT);
}

void loop() {

  if (pin_status(button_pin) == LOW && !timer_started) {
    start_time = millis();
    timer_started = true;
    motor_started = false;
    added_time = 0;
  }
  if (pin_status(button_pin) == HIGH) {
    timer_started = false;
    //myservo.attach(5);
    //myservo.write(0);
  }
  current_state = pin_status(touch_pin);
  if (current_state == HIGH && previous_state == LOW && timer_started) {
    added_time += 10000;
  }
  previous_state = current_state;

  if (millis() - start_time >= wait_time + added_time && !motor_started && timer_started) {
    digitalWrite(buzzer_pin, HIGH);
    myservo.attach(servo_pin);
    myservo.write(90);
    delay(500);          // give the servo time to reach 90 degrees
    myservo.detach();
    digitalWrite(buzzer_pin, LOW);
    motor_started = true;
  }

}