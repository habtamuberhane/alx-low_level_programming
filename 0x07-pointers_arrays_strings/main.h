#ifndef _MAIN_H_
#define _MAIN_H_

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;

	while(n--)
	{
		*s = b;
		s++;
	}

	return (start);
}

#endif
