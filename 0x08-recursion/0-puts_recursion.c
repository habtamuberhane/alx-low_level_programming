#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - a function that print string
 *
 * @s: input string
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

/**
 * main1 - check main code
 *
 * Return: Always 0
 */

int main1(void)
{
	_puts_recursion("Puts with Recursion");

	return (0);
}
