#ifndef _MAIN_H_
#define _MAIN_H_

char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
		dest++;
	
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return 0;
}

#endif