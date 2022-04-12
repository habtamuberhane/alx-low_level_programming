#include "main.h"

/**
 * _islower- the discription for this
 *
 *@c: discription of c 
 *
 * Return : 1 if its true.
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
