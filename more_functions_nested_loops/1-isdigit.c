#include "main.h"
#include <stdio.h>
/**
*_isdigit - Hello
*Return: 0 or 1
*@c: num checked
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
