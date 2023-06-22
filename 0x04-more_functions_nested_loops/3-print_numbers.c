#include <stdio.h>
#include "main.h"

/**
 * print_numbers - print numbers from 0-9 followed by new line
 */

void print_numbers(void)
{
	int a = 0;

	for (a; a <= 9; a++)
	{
		_putchar(a + '0');
	}
	_putchar('\n');
}
