/*
 * even pin high led.c.c
 *
 * Created: 20-05-2019 12:36:56
 * Author : madhu hannimi reddy
 */ 

#ifndef F_CPU
#define F_CPU 16000000UL
#endif

#include <avr/io.h>
#include <util/delay.h>

int main(void)
{
	DDRB= 0x55;
	while (1)
	{
		PORTB = 0xFF;
		_delay_ms(100);
	}
}