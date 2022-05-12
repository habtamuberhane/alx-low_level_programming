#include <stdlib.h>

/**
 * array_iterator -function that executes a function that given
 * @array: A pointer to array
 * @size: size of the array
 * @action: action(function) to iterate 
 * 
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (action == NULL || array == NULL)
		return;

	for (;i < size; i++)
		action(array[i]);
}
