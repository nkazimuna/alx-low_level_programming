#include <stdio.h>
#include "main.h"

/**
 * puts_half - prints half of a string
 * @str: user in put
 */

void puts_half(char *str)
{
	int a, b;

	for (a = 0; str[a] != '\0'; a++)

	a--;
	b = a % 2;
	a = (a - b) / 2;

	for (a = a + 1; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
}
