#include "main.h"
#include <stdio.h>

/**
 * print_line - function that draws a straight line
 * @n: input integer
 * Return: ALways 0
 */
void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{
		for (; i < n; i++)
			putchar('_');
	}
	putchar('\n');
}
