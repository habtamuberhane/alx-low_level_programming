#include "main.h"
#include <stdio.h>

/**
 * main1 - check the code
 *
 * Return: Always 0
 */
char *_strcat(char *dest, char *src);

int main1(void)
{
	char s1[98] = "Hello ";
	char s2[] = "world!\n";
	char *ptr;

	printf("%s\n",  s1);
	printf("%s", s2);
	ptr = _strcat(s1, s2);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", s1);
	
	return (0);
}
