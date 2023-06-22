#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - print numbers from 0-9 except 2 and 4
 * Return: 0-9 except 2 and 4
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; 1 <= 9; a++)
	{
		if ((a == 2) || (a == 4))
		{
			continue;
		}
		else
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}
