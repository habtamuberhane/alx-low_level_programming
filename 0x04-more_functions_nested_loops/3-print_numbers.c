#include "main.h"
#include <stdio.h>

/**
 * print_numbers - Print the number
 * 
 * Return: Always
 */

void print_numbers(void)
{
	int i = '0';

	for (; i <= '9'; i++)
		putchar(i);
	putchar('\n');
}
