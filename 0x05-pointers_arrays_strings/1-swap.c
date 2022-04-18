#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{

	*a = 98;
	*b = 42;


	printf("%d, %d\n", *a, *b);
	*a = *a - *b;
	*b = *a + *b;
	*a = *b - *a;
	printf("%d, %d\n", *a, *b);
}
