#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Hello
*Return: 0 Success
*/
int main(void)
{
	int digit;

	for (digit = '0'; digit <= '9'; ++digit)
	{
		putchar(digit);
	}

	putchar('\n');

	return (0);
}
