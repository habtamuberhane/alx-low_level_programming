#ifndef _MAIN_H_
#define _MAIN_H_

void _puts_recursion(char *s)
{
	while(*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
#endif
