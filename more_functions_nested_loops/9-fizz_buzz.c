#include <stdio.h>
#include <stdlib.h>
/**
*main - Hello
*Return: 0 Success
*/

int main(void)
{
	int num;

	for (num = 1; num < 101; num++)
	{
		if (num % 3 == 0 && num % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (num % 5 == 0)
		{
			printf("Buzz ");
		}
		else if (num % 3 == 0)
		{
			printf("Fizz ");
		}
		else
		{
			printf("%i ", num);
		}
		if (num == 101)
		{
			putchar('\n');
		}
	}
	putchar('\n');
	return (0);
}
