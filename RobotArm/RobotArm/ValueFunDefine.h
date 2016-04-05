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
	int DriValue = 1500;


	int toDriValue(float);

	float SetDriValue_a(float a);
	int SetDriValue_b(int b);
	void SetDriValue_a_b(float a,int b);

private:
	//y=ax+b
	//a的初始取值为（2500-500）/180，调整该值意味着调整线性比例项，补偿基准电压的不足。
	float DriValue_a = 11.1111;
	//b的取值为500，调整该项意味着调整初始角度，补偿安装位置的误差
	int DriValue_b = 500;
};
extern Angle Angle0;
extern Angle Angle1;
extern Angle Angle2;





#endif