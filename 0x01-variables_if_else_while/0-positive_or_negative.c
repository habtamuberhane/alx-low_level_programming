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

	if (n > 0)
	{
	printf(n + "is positive\n");
	}else if (n == 0)
	{
	printf(n + "is zero\n");
	}else if (n < 0)
	{
	printf(n + "is negative");
	}	


	return (0);
}
