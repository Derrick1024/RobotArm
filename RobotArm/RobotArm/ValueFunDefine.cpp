#include "ValueFunDefine.h"

int Angle::toDriValue(void)
{
	DriValue = (int)(DriValue_a*Value + DriValue_b);
	return DriValue;
}
int Angle::toDriValue(float val)
{
	DriValue = (int)(DriValue_a*val+ DriValue_b);
	return DriValue;
}

float Angle::SetDriValue_a(float a)
{
	DriValue_a = a;
	return DriValue_a;
}

int Angle::SetDriValue_b(int b)
{
	DriValue_b = b;
	return DriValue_b;
}

void Angle::SetDriValue_a_b(float a, int b)
{
	DriValue_a = a;
	DriValue_b = b;
}



