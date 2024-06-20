#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Hello
*Return: 0 Succes
*/

int main(void)
{
	int num;

	for (num = '0' ; num <= '9' ; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar('\n');
		}
	}

	return (0);
}
