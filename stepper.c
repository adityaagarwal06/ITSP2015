// ITSP2015
// My Institue Summer Technical Project
#include <Stepper.h>
const int stepsPerRevolution = 200 ;
Stepper myStepper( stepsPerRevolution , 7 , 8 , 9, 10 );
int stepCount = 0 ;
void setup()
{
 Serial.begin(9600);
}
void loop()
{
 myStepper.step(1);
 Serial.print("steps; " );
 Serial.println(stepCount);
 stepCount++;
 delay(500);
 
 }
 
