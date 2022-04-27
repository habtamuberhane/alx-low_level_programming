#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - a function that print the string reverse
 * @s: the string
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}

/**
 * main1 - check the code
 *
 * Return: Always 0
 */

int main1(void)
{
	_print_rev_recursion("\nColton Walker");
	return (0);
}
