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
	//a�ĳ�ʼȡֵΪ��2500-500��/180��������ֵ��ζ�ŵ������Ա����������׼��ѹ�Ĳ��㡣
	float DriValue_a = 11.1111;
	//b��ȡֵΪ500������������ζ�ŵ�����ʼ�Ƕȣ�������װλ�õ����
	int DriValue_b = 500;
};
extern Angle Angle0;
extern Angle Angle1;
extern Angle Angle2;





#endif