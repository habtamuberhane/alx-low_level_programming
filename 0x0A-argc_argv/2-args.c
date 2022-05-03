#include "main.h"
#include <stdio.h>

/**
 * main -the code that print all argument that recives
 * @argc: parameter
 * @argv: parameter
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;
	if (argv[0])
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
