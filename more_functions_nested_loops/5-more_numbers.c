#include "main.h"
#include <stdio.h>
/**
*more_numbers - Hello
*
*
*/

void more_numbers(void)
{
	int num;
	int max;

	char digit[] = "0123456789";

	for (max = 0; max <= 9; max++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num < 10 || num == 14)
			{
				if (num >= 10)
				{
					_putchar(digit[num / 10]);
				}
				_putchar(digit[num % 10]);
			}
		}
	_putchar('\n');
	}

}
