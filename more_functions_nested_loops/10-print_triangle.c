#include "main.h"
#include <stdio.h>
/**
*print_triangle - Hello
*@size: size
*/

void print_triangle(int size)
{
	int a, b, c;

	if (size > 0)
	{
		for (a = 0; a < size; a++)
		{
			for (b = size - 1; b > a; b--)
			{
				_putchar(' ');
			}

			for (c = 0; c <= a; c++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
