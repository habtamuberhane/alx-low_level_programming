#include "main.h"
#include <stdio.h>

/**
 * main1 - check the code for
 *
 * Return: Always 0.
 */

char *leet(char *);

int main1(void)
{
	char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
	
	char *p;

	p = leet(s);
	printf("%s", p);
	printf("%s", s);

	return (0);
}
