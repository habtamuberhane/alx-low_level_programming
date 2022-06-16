#include "main.h"
#include <stdio.h>

/**
 * print_diagonal - function that draws a diagonal
 * @n: input integer
 * Return: Always 0
 */
void print_diagonal(int n)
{
	int i = 0, j;

	if (n > 0)
	{
		for (; i < n; i++)
		{
			for (j = 0; j < i; j++)
				putchar(' ');
			putchar(92);
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
