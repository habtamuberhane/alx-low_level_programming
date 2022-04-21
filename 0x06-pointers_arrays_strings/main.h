#ifndef _MAIN_H_
#define _MAIN_H_

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest);
}

char *_strncat(char *dest, char *src, int n)
{
	int srclen = 0;
	int i = 0;
	char *temp = dest; 
	char *start = src;

	while (*src)
	{
		srclen++;
		src++;
	}

	while (*dest)
		dest++;

	if (n > srclen)
		n = srclen;

	src = start;

	for(; i < n; i++)
		*dest++ = *src++;

	*dest = '\0';

	return (temp);
}

#endif
