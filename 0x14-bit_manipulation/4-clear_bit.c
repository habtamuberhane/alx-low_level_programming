#include "main.h"

/**
 * clear_bit - Function that clear a bit
 * @n: pointer to set bit
 * @index: the index to set bit at
 * Return: 1 or -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int max = 0x01;

	max = ~(max << index);
	if (max == 0x00)
		return (-1);

	*n &= max;
	return (1);
}
