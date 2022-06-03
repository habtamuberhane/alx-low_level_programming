#include "main.h"
#include <stdio.h>
/**
 * print_rev - Function that print the reverse string
 * @s: pointer
 * Return: Nothing
 */

void print_rev(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	while (len)
		putchar(s[--len]);

	putchar('\n');
}
