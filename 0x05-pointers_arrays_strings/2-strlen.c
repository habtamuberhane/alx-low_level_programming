#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	char *str;
	int len;

	str = "My first strlen!";
	len = _strlen(str);
	printf("%d\n", len);

	return (0);
}
