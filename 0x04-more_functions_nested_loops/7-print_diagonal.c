#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - draw a diagonal line
 * @n: user input
 */

void print_diagonal(int n)
{
	int p, q;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (p = 1; p <= n; p++)
		{
			for (q = 1; q < p; q++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
