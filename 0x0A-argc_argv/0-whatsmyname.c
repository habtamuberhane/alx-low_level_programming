#include "main.h"
#include <stdio.h>

/**
 * main - the code that print the string
 * @argc: argument
 * @argv: argument value
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
