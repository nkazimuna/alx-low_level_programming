#include <stdio.h>
#include "main.h"

/**
 * print_rev - prints a string in reverse, followed by a new  line
 * @s: user input
 */

void print_rev(char *s)
{
	int a = 0;

	while (*s != 0)
	{
		s++;
		a++;
	}
	s--;

	while (a > 0)
	{
		_putchar(*s);
		s--;
		a--;
	}
	_putchar(10);
}
