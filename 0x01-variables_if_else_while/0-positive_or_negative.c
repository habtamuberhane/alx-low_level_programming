#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* Task 0*/
/**
 * main - Entry point
 *
 * Return: Alaways 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (n > 1)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero\n", n);
	}
	else if (n < 0)
	{
	printf("%d is negative\n", n);
	}

	return (0);
}
