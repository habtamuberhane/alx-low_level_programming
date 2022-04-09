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
			printf("%d ", i);
		}
		else if (i != 9)
		{
			printf("%d, ", i);
		}
	}

	return (0);

}
