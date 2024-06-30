#include "main.h"
#include <stdio.h>
/**
*print_rev - Hello
*@s: string
*/

void print_rev(char *s)
{
	int length = 0;
	int i;

	while (s[i++])
	{
		length++;
	}
	for (i = length - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
