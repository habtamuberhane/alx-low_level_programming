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

char *_strncpy(char *dest, char *src, int n)
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
	
	srclen++;

	if (n > srclen)
		n = srclen;

	src = start;

	for (; i < n; i++)
		*dest++ = *src++;

	return (temp);
}

int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;
	
	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}

}

char *string_toupper(char *)
{
	char *start = s;

	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	
	return (start);
}
#endif
