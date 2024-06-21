#include "main.h"
#include <stdio.h>
/**
*print_alphabet - Hello
*Return: 0 Success
*/

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
	}
	_putchar('\n');

}
