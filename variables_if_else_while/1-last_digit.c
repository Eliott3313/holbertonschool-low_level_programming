#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Hello
*
* Return: Always 0.
*/
int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;

	printf("Last digit of %d is %d", n, last_digit);
	if (last_digit > 5)
	{
		printf("and is grater than 5\n", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("and is 0\n", n, last_digit);
	}
	else
	{
		printf("and is less than 6 and not 0\n", n, last_digit);
	}
	return (0);
}
