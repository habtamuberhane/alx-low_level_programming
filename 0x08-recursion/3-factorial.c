#include "main.h"
#include <stdio.h>

/**
 * factorial - function that works on factorial
 * @n: integer number
 * Return: return the factorial
 */

int factorial(int n)
{
	if (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}

/**
 * main1 - check the main code
 *
 * Return: Always 0
 */

int main1(void)
{
	int r;
	
	r = factorial(1);
	printf("%d\n", r);
	r = factorial(5);
	printf("%d\n", r);
	r = factorial(10);
	printf("%d\n", r);
	r = factorial(-1024);
	printf("%d\n", r);
	
	return (0);
}
