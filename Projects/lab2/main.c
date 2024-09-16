/*
 * main.c
 *
 *  Created on: Sep 16, 2024
 *      Author: sameh
 */

#include "stdTypes.h"
#include <util/delay.h>

#define DDRA *(( u8*)0x3A)
#define PORTA *(( u8*)0x3B)
#define PINA *((volatile u8*)0x39)

int main(void)
{

	while (1)
	{
		for (int i=0; i<8;i++)
		{

			DDRA |= (1<<i);
			PORTA |= (1<<i);
			_delay_ms(1000);
		}
		for (int i=0; i<8;i++)
		{

			DDRA |= (1<<i);
			PORTA &= ~(1<<i);
			_delay_ms(1000);
		}
	}
    return 0;
}

