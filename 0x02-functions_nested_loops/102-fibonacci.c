#include <stdio.h>
/**
 * main - bdubuacb dnjdv
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	unsigned long i = 0, j = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = i + j;
		printf("%lu", sum);

		i = j;
		j = sum;

		if (count == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
	}
	return (0);
}
