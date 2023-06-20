#include "main.h"
#include <stdio.h>
/**
 * print_alphabet - print alphabets using _putchar
 */
int print_alphabet(void)
{
	char a;

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}
