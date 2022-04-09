#include <stdio.h>

/* Header for something */

/**
 * main - ENtry
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		if (i == 9)
		{
			putchar('0' + i);
		}
		else if (i != 9)
		{
			putchar(',');
			putchar(' ');
			putchar('0' + i);
		}
	}

	return (0);

}
