#include "main.h"
#include <stdio.h>
/**
*print_last_digit - Hello
*Return: last
*@n: num checked
*/

int print_last_digit(int n)
{
	int last = n % 10;

	if (last < 0)
	{
		last *= -1;
	}
	_putchar(last + '0');
	return (last);
}
