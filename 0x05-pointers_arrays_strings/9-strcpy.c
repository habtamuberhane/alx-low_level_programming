#include "main.h"

/**
 * _strcpy - a function that copies the string
 * @dest: pointer to destination
 * @src: pointer to source
 * Return: Always 0
 */
char *_strcpy(char *dest, char *src)
{
	char *aux = dest;

	while (*src)
		*dest++ = *src++;

	return (aux);
}
