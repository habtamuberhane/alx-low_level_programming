#include "main.h"

/**
 * set_bit - Function that sets a bit at given index
 * @n: pointer to set
 * @index: the index to set bit at
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max <<= index;

	if (max == 0)
		return (-1);
	*n |= max;
	return (1);
}
