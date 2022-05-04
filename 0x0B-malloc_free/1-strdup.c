#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - code that returns a pointer
 * @str: parameter
 * Return: Always 0 unless there is something unsuccessfull
 */
char *_strdup(char *str)
{
	char *new_str, *start;
	int i = 0, len = 0;

	if (str == NULL)
		return (NULL);

	start = str;

	while (*str)
	{
		len++;
		str++;
	}
	str = start;
	new_str = malloc(sizeof(char) * (len - 1));
	start = new_str;

	if (new_str != NULL)
	{
		for (; i < len; i++)
		{
			new_str[i] = *str;
			str++;
		}
		new_str[i] = '\0';
		return (start);
	}
	else
		return (NULL);
}
