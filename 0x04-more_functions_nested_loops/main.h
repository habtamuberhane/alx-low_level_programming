#ifndef _MAIN_H_
#define _MAIN_H_

int _isupper(int c);
int _isdigit(int c);
int mul(int a, int b);
void print_numbers(void);
void print_most_numbers(void)
{
	int i;
	i = 0;

	for (i = 0; i < 10; i++)
	{
		if (i == 2 || i == 4)
		{
			i++;
		}
		
		putchar(i + '0');
		putchar('\n');
}


#endif

