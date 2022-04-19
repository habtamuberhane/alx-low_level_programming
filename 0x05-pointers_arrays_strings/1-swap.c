#include "main.h"
#include <stdio.h>

/**
 * main1 - check the code
 * @parameterint*: parameters pointer
 * @a: variable
 * @b: variable
 * Return: Always 0.
 */
void swap_int(int*, int*);

int main1(void)
{

	int a;
	int b;

	a = 98;

	b = 42;

	printf("%d, %d\n", a, b);
	swap_int(&a, &b);
	printf("%d, %d\n", a, b);

	return (0);

}
