#include "main.h"
#include <stdio.h>

/**
 * main1 - check the code
 *
 * Return: Always 0.
 */
char *string_toupper(char *);

int main1(void)
{
	char str[] = "Look up!\n";
	char *ptr;
	
	ptr = string_toupper(str);
	printf("%s", ptr);
	printf("%s", str);
	
	return (0);
}
