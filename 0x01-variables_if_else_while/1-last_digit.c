#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/**
 *main - Entry point
 *
 *Return: Alaways 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d %s\n", n, n % 10,
			((n % 10) == 0) ? "amd is 0"
			: (((n % 10) > 5) ? "and is greater than 5"
					: "and is less than 6 and not 0"));


	return (0);

}
