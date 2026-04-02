#include <Arduino.h>

const int RPWM = 25;
const int LPWM = 26;
const int R_EN = 27;
const int L_EN = 14;

const int CH_R = 0;
const int CH_L = 1;

const int PWM_FREQ = 20000;
const int PWM_RES = 8; 

void stopMotor() {
  ledcWrite(CH_R, 0);
  ledcWrite(CH_L, 0);
}

void moveForward(uint8_t speed) {
  ledcWrite(CH_L, 0);
  ledcWrite(CH_R, speed);
}

void moveBackward(uint8_t speed) {
  ledcWrite(CH_R, 0);
  ledcWrite(CH_L, speed);
}

void setup() {
  pinMode(R_EN, OUTPUT);
  pinMode(L_EN, OUTPUT);

  digitalWrite(R_EN, HIGH);
  digitalWrite(L_EN, HIGH);

  ledcSetup(CH_R, PWM_FREQ, PWM_RES);
  ledcAttachPin(RPWM, CH_R);

  ledcSetup(CH_L, PWM_FREQ, PWM_RES);
  ledcAttachPin(LPWM, CH_L);

  stopMotor();
}

void loop() {
  moveForward(200);
  delay(2000);

  stopMotor();
  delay(1000);

  moveBackward(200);
  delay(2000);

  stopMotor();
  delay(1000);
}