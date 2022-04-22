#include "main.h"
#include <stdio.h>

/**
 * main1 - check the code
 *
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2);

int main1(void)
{
	char s1[] = "Hello";
	char s2[] = "World!";

	printf("%d\n", _strcmp(s1, s2));
	printf("%d\n", _strcmp(s2, s1));
	printf("%d\n", _strcmp(s1, s1));
	
	return (0);
}
