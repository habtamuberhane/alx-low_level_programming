#include <stdio.h>

/**
 * main1 - the code that print the string
 * @argc: argument
 * @argv: argument value
 * Return: Always 0
 */

int main1(int argc, char *argv[])
{
	if (argc > 0)
		printf("%s\n", argv[0]);

	return (0);
}
