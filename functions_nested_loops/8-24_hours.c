#include "main.h"
#include <stdio.h>
/**
*jack_bauer - Hello
*Return: none
*
*/

void jack_bauer(void)
{
	int hour = 0;
	int minute = 0;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar((hour / 10) + '0');
			_putchar((hour % 10) + '0');
			_putchar(':');
			_putchar((minute / 10) + '0');
			_putchar((minute % 10) + '0');
			_putchar('\n');
		}
	}
}
