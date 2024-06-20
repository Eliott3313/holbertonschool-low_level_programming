#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Hello
*Return: 0 Success
*/

int main(void)
{
	int num1;
	char letter;

	for (num1 = '0' ; num1 <= '9' ; num1++)
	{
		putchar(num1);
	}
	for (letter = 'a' ; letter <= 'f' ; letter++)
	{
		putchar(letter);
	}
	putchar('\n');

	return (0);
}
