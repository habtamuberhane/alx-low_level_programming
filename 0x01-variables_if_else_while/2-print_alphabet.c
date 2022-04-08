#include <stdio.h>
/* more headers goes there */

/**
 *main - Entry point
 *
 *Return: Alaways 0 (Success)
 */

int main(void)
{
	int ch;
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
