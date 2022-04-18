#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	*n = 402;
	printf("%d\n", *n);
	*n = 98;
	printf("%d\n", *n);
}
