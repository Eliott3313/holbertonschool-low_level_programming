#include "main.h"
#include <stdio.h>

/**
*_isalpha - Hello
*Return: 0 or 1 Success
*@c: the char checked
*/

int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
		if (c >= 'A' && c <= 'Z')
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	else
	{
		return (0);
	}
}
