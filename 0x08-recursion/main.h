#ifndef _MAIN_H_
#define _MAIN_H_

void _puts_recursion(char *s)
{
	if(*s)
	{
		putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}
#endif
