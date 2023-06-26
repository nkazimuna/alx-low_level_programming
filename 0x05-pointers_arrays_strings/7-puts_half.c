#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: user in put
 */

void puts_half(char *str)
{
	int b, c = 0;

	while (str[c] != '\0')
	{
		c++;
	}

	b = c / 2;

	if (c % 2 == 1)
	{
		b++;
	}

	while (b < c)
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
