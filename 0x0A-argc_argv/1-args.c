#include "main.h"
#include <stdio.h>

/**
 * main - the code that prints the number of arguments passed into it
 * @argc: parameter
 * @argv: parameter
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	if (argv[0])
		printf("%d\n", argc - 1);
	return (0);
}
