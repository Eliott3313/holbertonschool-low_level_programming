#include "main.h"
#include <stdio.h>
/**
*_isupper - Hello
*Return: 0 or 1
*@c: char checked
*/

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
