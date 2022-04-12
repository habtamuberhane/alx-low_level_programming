#include "main.h"

/**
 * print_sign - is now cheking the numbers sign
 *
 * Return: Always 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		_putchar("Invalid');
	}
}
