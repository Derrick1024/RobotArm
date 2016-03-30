#ifndef _VAlUEFUNDEFINE_h
#define _VAlUEFUNDEFINE_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif

class Angle
{
public:
	//float Angle[3] = {0};
	float Value = 0;
private:

};
extern Angle Angle0;
extern Angle Angle1;
extern Angle Angle2;





#endif