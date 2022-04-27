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
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		putchar('\n');
}

int main(void)
{
	_puts_recursion("Puts with Recursion");

	return (0);
}
