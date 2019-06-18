#include <Servo.h>
Servo esc_signal;

void setup()
{
  esc_signal.attach(13);  //Specify here the pin number on which the signal pin of ESC is connected.
   delay(3000);            //ESC initialization delay.
  Serial.begin(9600);

while (!Serial);

Serial.println("Input 1 to Turnon and 2 to off");
}

void loop(){

if (Serial.available())

{

int state = Serial.parseInt();

if (state == 1)

{

esc_signal.write(55);   

Serial.println("running");



if (state == 2)

{

esc_signal.write(0);   


Serial.println("notrunning");

}

}

}

} 
