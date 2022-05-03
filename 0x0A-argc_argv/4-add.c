#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - the code that adds positive number
 * @argc: parameter
 * @argv: parameter
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j, result = 0;

	while (argc-- > 1)
	{
		for (i = 0; argv[argc][i]; i++)
		{
			if (!(isdigit(argv[argc][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		j = atoi(argv[argc]);
		result += j;
	}
	printf("%d\n", result);
	return (0);
}
