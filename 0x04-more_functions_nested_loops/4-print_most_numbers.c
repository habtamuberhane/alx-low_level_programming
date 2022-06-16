#include "main.h"
#include <stdio.h>

/**
 * print_most_numbers - check the code
 *
 * Return: always 0
 */
void print_most_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
	{
		if (i != 2 && i != 4)
		{
			putchar(i);
		}
	}
	putchar('\n');
}
