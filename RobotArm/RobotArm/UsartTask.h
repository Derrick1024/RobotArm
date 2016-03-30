// UsartTask.h

#ifndef _USARTTASK_h
#define _USARTTASK_h

#if defined(ARDUINO) && ARDUINO >= 100
#include "arduino.h"
#else
#include "WProgram.h"
#endif




int Usart0_TmtTask(void);
int Usart0_RevTask(void);
int Usart1_TmtTask(void);
int Usart1_RevTask(void);







#endif

