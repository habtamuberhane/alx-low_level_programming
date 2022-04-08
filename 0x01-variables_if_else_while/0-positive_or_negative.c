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

	printf("Last digit of %d is %d %S\n", n, n % 10,
			((n % 10) == 0) ? "amd -s 0"
			: (((n % 10) > "and is greate than 5"
					: "and is less than 6 and not 0"));

	return (0);
}
