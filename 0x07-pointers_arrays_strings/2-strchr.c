#include "main.h"

/**
 * main1 - check the code
 *
 * Return: Always 0.
 */

char *_strchr(char *s, char c);

int main1(void)
{
	char *s = "hello";
	char *f;

	f = _strchr(s, 'l');

	if (f != NULL)
	{
		printf("%s\n", f);
	}
	
	return (0);
}
