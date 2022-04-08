#include <stdio.h>

/* Something */

/**
 *main - Entry point
 *
 *Return: Always 0(Succcess)
 */

int main(void)
{
	int ch;
	
	for (ch = 'z'; ch <= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
