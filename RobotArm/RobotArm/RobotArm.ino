/*
 Name:		RobotArm.ino
 Created:	2016/3/28 22:00:01
 Author:	ycg10
*/

#include "UsartTask.h"
#include "ValueFunDefine.h"




Angle Angle0;
Angle Angle1;
Angle Angle2;

// the setup function runs once when you press reset or power the board


void setup() {
	Serial.begin(9600);
	Serial1.begin(9600);

}

// the loop function runs over and over again until power down or reset
void loop() {

	//Usart0_TmtTask();
	if (Usart0_RevTask() == 1)
	{
		Usart1_TmtTask();
		while (!Usart1_RevTask());
		Usart0_TmtTask();
	}


}
