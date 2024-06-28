#include "main.h"
#include <stdio.h>
/**
*_strlen - Hello
*@s: string
*Return: lenght Success
*/

int _strlen(char *s)
{
	int lenght = 0;

	while (*s != '\0')
	{
		lenght++;
		s++;
	}
	return (lenght);
}
