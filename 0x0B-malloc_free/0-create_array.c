#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - the function that creates an array
 * @size: size of array
 * @c: parameter
 * Return: return  pointer to array or null if its fails
 */

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i = 0;

	s = malloc(size * sizeof(char));

	if (s == NULL)
		return (NULL);

	if (size == 0)
		return (NULL);

	while (i < size)
	{
		s[i] = c;
		i++;
	}
	return (s);
}
