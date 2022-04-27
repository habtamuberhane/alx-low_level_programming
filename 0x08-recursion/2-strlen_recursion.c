#include "main.h"

/**
 * _strlen_recursion - function that tell the length of string
 * @s: string
 */

int _strlen_recursion(char *s)
{
	if(*s)
		return (1 + _strlen_recursion(s + 1));

	return (0);
}

/**
 * main1 - check the main code
 *
 * Return: Always 0
 */

int main1(void)
{
	int n;
	
	n = _strlen_recursion("Corbin Coleman");
	printf("%d\n", n);

	return (0);
}
