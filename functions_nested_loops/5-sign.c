#include "main.h"
#include <stdio.h>
/**
*print_sign - Hello
*Return: 0 -1 or 1 Success
*@n: char checked
*/

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (0);
	}
}
