#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int a;
	int b;

	a = 98;
	b = 42;

	printf("a=%d, b=%d\n", a, b);
	
	a = a - b;
	b = a + b;
	a = b - a;
	
	printf("a=%d, b=%d\n", a, b);
}
