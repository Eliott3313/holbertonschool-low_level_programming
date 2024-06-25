#include "main.h"
/**
*more_numbers - Hello
*Return: none
*/

void more_numbers(void)
{
	int num, max;

	for (num = 0; num < 10; num++)
	{
		for (max = 0; max <= 14; max++)
		{
			if (max > 9)
			{
				_putchar('0' + (max / 10));
			}
			_putchar('0' + (max % 10));
		}
	_putchar('\n');
	}

}
