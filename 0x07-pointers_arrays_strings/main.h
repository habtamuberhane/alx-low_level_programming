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

char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (c == *s)
		{
			return (S);
		}
		s++;
	}
	if(c == *s)
		return (s);
	return (NULL);
}

#endif
