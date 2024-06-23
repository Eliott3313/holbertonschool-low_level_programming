#include "main.h"
#include <stdio.h>
/**
*time_table - Hello
*Return: none
*/

void times_table(void)
{
	int row;
	int col;
	int prod;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		for (col = 1; col <= 9; col++)
		{
			prod = col * row;
			_putchar(',');
			_putchar(' ');
			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar((prod / 10) + '0');
			}
			_putchar((prod % 10) + '0');
		}
		_putchar('\n');
	}
}
