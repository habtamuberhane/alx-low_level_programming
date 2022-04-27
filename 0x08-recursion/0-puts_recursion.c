#include "main.h"
#include <stdio.h>

/**
 * main - code
 *
 * Return - Always 0
 */

void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_putchar_recursion(s + 1);
	}
	else
		_putchar('\n');
}

int main(void)
{
	_puts_recursion("Puts with Recursion");

	return (0);
}
