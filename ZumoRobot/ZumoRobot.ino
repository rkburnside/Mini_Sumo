/*ZumoRobot
Developer: roadrunner
Start Date: 2015/12/25
*/

int led = 13; //status LED

void setup(){
   pinMode(led, OUTPUT);
}

void loop(){
   digitalWrite(led, HIGH);   // turn the LED on (HIGH is the voltage level)
   delay(10000);               // wait for a second
   digitalWrite(led, LOW);    // turn the LED off by making the voltage LOW
   delay(10000);               // wait for a second
}
