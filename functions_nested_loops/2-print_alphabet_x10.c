#include "main.h"
#include <stdio.h>
/**
*print_alphabet - print alphabet 10 x
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
			if (letter == 'z')
			{
				_putchar('\n');
			}
		}
	}

}
