#include "main.h"
/**
*more_numbers - Hello
*Return: none
*/

void more_numbers(void)
{
	int num, max;

	for (num = 0; num <= 9; num++)
	{
		for (max = 0; max <= 14; max++)
		{
			if (max >= 10 && max <= 14)
			_putchar(num / 10 + '0');
			_putchar(num % 10 + '0');
		}
	_putchar('\n');
	}

}
