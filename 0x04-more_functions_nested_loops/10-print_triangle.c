#include "main.h"
#include <stdio.h>

/**
 * print_triangle - function that print triangle
 * @size: input integer
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i = 0, j, n = size - 1;

	if (size > 0)
	{
		for (; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				if (j < n)
					putchar(' ');
				else
					putchar('#');
			}
			n--;
			putchar('\n');
		}
	}
	else
		putchar('\n');
}
