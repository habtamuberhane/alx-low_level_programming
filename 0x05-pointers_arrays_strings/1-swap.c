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
	swap_int(&a, &b);
	printf("%d, %d\n", *a, *b);
}
