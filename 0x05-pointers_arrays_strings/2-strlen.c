#include "main.h"
#include <stdio.h>

/**
 * _strlen - function that return the length of string
 * @s: input string
 * Return: Nothing
 */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;

	return (len);
}
