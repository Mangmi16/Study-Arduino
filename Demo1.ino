
#include <avr/wdt.h>
#include "DeviceDriverSet_xxx0.h"

DeviceDriverSet_Servo AppServo;

void setup()
{
  // put your setup code here, to run once:
  AppServo.DeviceDriverSet_Servo_Init(90);

  for (int i = 0; i <= 180; i += 30)
  {
    AppServo.DeviceDriverSet_Servo_control(i);
  }

  for (int i = 180; i >= 90; i -= 30)
  {
    AppServo.DeviceDriverSet_Servo_control(i);
  }
}

void loop()
{


}
