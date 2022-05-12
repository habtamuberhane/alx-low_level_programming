#include <stdlib.h>

/**
 * int_index - a function that searches for an integer
 * @array: A pointer to array
 * @sizes: size of the array
 * @cmp: to compare the elements throw array
 *
 * Return: not return 0, but id no elements -1 will return
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (cmp == NULL || array == NULL)
		return (-1);

	if (size <= 0)
		return (-1);

	for (;i < size; i++)
		if (cmp(array[i]))
			return (i);

	if(i == size)
		return (-1);

	return (-1);
}
