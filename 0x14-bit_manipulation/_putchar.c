#include <unistd.h>

/**
 * _putchar - write the charachter
 * @c: pointer
 *
 * Return: something
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
