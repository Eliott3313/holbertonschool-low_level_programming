#include "main.h"
#include <stdio.h>
/**
*_islower - Hello
*Return: 0 or 1 Success
*@c: The char checked
*/

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
