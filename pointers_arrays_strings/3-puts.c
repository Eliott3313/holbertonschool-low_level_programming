#include "main.h"
#include <stdio.h>
/**
*_puts - Hello
*@str: string
*/

void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
