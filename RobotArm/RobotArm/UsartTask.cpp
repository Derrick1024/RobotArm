// 
// 
// 

#include "UsartTask.h"
#include "ValueFunDefine.h"

String comdata0 = "";//串口接收数据
String comdata1 = "";//串口接收数据

int Usart0_TmtTask(void)
{
	Serial.println("OK");
	return 0;
}

int Usart0_RevTask(void)
{
	String temp = "";
	int first = 0, second = 0;

	if (Serial.available() > 0)
	{
		while (Serial.peek() != 0x66)
		{
			comdata0 += char(Serial.read());
			delay(2);
			
		}
		Serial.read();
		delay(2);
		Serial.read();
		delay(2);

		for (int i = 0; i < comdata0.length(); i++)
		{
			if (comdata0[i] == ',')
			{
				if (first == 0)
				{
					first = i;
				}
				else
				{
					second = i;
				}
			}
		}

		/*Serial.print(comdata2);
		Serial.print(first);
		Serial.print(second);*/
		temp = comdata0.substring(0, first);
		Angle0.Value= temp.toFloat();
		temp = comdata0.substring(first + 1, second);
		Angle1.Value = temp.toFloat();
		temp = comdata0.substring(second + 1, comdata0.length());
		Angle2.Value = temp.toFloat();

		Serial.println("Angle0");
		Serial.println(Angle0.Value,3);
		Serial.println("Angle1");
		Serial.println(Angle1.Value,3);
		Serial.println("Angle2");
		Serial.println(Angle2.Value,3);
		comdata0 = "";
		return 1;
	}
	return 0;
}

int Usart1_TmtTask(void)
{
	Angle0.toDriValue();
	Serial.println(Angle0.DriValue);
	Angle1.toDriValue();
	Serial.println(Angle1.DriValue);
	Angle2.toDriValue();
	Serial.println(Angle2.DriValue);
	Serial1.println(String("") + "#" + 1 + "P" + Angle0.DriValue + "#" + 2 + "P" + Angle1.DriValue + "#" + 3 + "P" + Angle2.DriValue + "T" + 150);
	//Serial1.println(String("") + "#" + 2 + "P" + Angle1.DriValue + "T" + 100);
	//Serial1.println(String("") + "#" + 3 + "P" + Angle2.DriValue + "T" + 100);
	return 1;
}


int Usart1_RevTask(void)
{
	if (Serial1.available() > 0)
	{
		while (Serial1.peek() != 0x0D)
		{
			comdata1 += char(Serial1.read());
			delay(2);

		}
		Serial1.read();
		delay(2);
		Serial1.read();
		delay(2);

		if ((comdata1[0] == 0x4F) && (comdata1[1] == 0x4B))
		{
			return 1;
		}
		else
		{
			return 0;
		}

	}
	comdata1 = "";
	return 0;
}
