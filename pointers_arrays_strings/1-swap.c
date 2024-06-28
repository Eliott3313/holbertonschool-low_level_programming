#include "main.h"
#include <stdio.h>
/**
*swap_int - Hello
*@a: 42
*@b: 98
*/

void swap_int(int *a, int *b)
{
	int swap = *a;

	*a = *b;
	*b = swap;
}
