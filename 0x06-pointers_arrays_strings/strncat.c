#include "main.h"

/**
 * main1 - check the code for Holberton School students.
 *
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n);

int main1(void)
{
	char s1[98] = "Hello ";
	char s2[] = "World!\n";
	char *ptr;

	printf("%s\n", s1);
	printf("%s", s2);
	ptr = _strncat(s1, s2, 1);
	printf("%s\n", s1);
	printf("%s", s2);
	printf("%s\n", ptr);
	ptr = _strncat(s1, s2, 1024);
	printf("%s", s1);
	printf("%s", s2);
	printf("%s", ptr);
	
	return (0);
}
