#include <stdio.h>

/* Using constructors in C */
void main_constructor(void) __attribute__((constructor));
/**
 * main_constructor - A constructor function
 * it runs before the main
 * Return: Norhing
 */
void main_constructor(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
