#ifndef _MAIN_H_
#define _MAIN_H_

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;
	
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

#endif
