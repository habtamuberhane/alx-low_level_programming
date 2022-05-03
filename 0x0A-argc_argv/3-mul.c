#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - the code that print the result of the multiplication
 * @argc: parameter
 * @argv: parameter
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		i = atoi(argv[1]);
		j = atoi(argv[2]);
		result = i * j;
		printf("%d\n", result);
		return (0);
	}
}
