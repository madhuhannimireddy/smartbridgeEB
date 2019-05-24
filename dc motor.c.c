/*
 * dc motor.c.c
 *
 * Created: 20-05-2019 12:42:10
 * Author : madhu hannimi reddy
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif
#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB = 0xFF;
	while (1)
	{
		
		PORTB = 0x01;
		_delay_ms(500);
		PORTB = 0x02;
		_delay_ms(500);
	}
}

