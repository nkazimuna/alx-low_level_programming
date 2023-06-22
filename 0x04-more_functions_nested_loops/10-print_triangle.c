#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: user
 * Return: triangle made of #
 */

void print_triangle(int size)
{
	int a, b;

	if (size > 0)
		for (a = size; a > 0; a--)
		{
			for (b = 1; b <= size; b++)
				if (b >= a)
					_putchar('#');
				else
					_putchar(' ');
			_putchar('\n');
		}
	else
		_putchar('\n');
}
