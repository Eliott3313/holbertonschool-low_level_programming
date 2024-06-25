#include "main.h"
#include <stdio.h>
/**
*print_square - Hello
*@size: num checked
*/

void print_square(int size)
{
	int lon;
	int l;

	for (lon = 0; lon < size; lon++)
	{
		for (l = 0; l < size; l++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
	if (size <= 0)
	{
		_putchar('\n');
	}
}
