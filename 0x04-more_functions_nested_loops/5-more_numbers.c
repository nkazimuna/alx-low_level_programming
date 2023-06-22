#include <stdio.h>
#include "main.h"

/**
 * more_numbers - print10 times the numbers from 0-14
 */

void more_numbers(void)
{
	int a;
	int b;

	b = 0;

	for (a = 0; a < 10; a++)
	{
		while (b < 15)
		{
			if (b > 9)
			{
				_putchar('0' + b / 10);
			}
			_putchar('0' + b % 10);
			b++;
		}
		b = 0;
		_putchar('\n');
	}
}
