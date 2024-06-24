#include "main.h"
#include <stdio.h>
/**
*print_numbers - Hello
*Return: 0
*/

int print_numbers(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');

	return (0);
}
