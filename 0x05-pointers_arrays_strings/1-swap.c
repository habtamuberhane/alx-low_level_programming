#include "main.h"
#include <stdio.h>

/**
 * swap_int - Function that swap the number
 * @n: pointer
 * Return: Nothing
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
