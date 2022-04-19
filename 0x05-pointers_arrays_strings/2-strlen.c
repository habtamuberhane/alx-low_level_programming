#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */

int _strlen(char *s)
{
	int len;

	s[len] = "My first strlen!";
	
	for (len = 0; s[len] != 0; ++len)
	{
		printf("%d\n", len);
	}
	return (0);
}
