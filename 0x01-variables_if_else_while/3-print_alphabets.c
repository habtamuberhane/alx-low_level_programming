#include <stdio.h>
/* Something */
/*
 * main
 *
 * Return
 */
int main(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}

	putchar('\n');

	for (ch = 'A'; ch<= 'Z'; ch++)
	{
		putchar(ch);
	}

	return (0);
}
