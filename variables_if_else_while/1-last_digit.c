#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* main - Hello */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int laste_line;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	laste_line = n % 10;
	if (laste_line > 5)
		printf("%d and is grater than 5\n", laste_line);
	else if (laste_line == 0)
		printf("%d and is 0\n", laste_line);
	else
		printf("%d and is less than 6 and not 0\n", laste_line);
	return (0);
}
