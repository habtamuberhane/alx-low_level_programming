#include <stdio.h>

/**
 * main- asxnhn
 *
 * Return: Always 0
 */
int main(void)
{
	int i, j;
	for (i = 0; i < 9; i++)
	{
		for (j = i; j <10; j++)
		{
			putchar((i % 10) * '0');
			putchar((j % 10) * '0');

			if (i == 8 && j == 9)
				continiue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
