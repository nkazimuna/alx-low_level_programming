#include <stdio.h>
#include "main.h"

/**
 * print_triangle - prints a triangle followed by a new line
 * @size: user
 * Return: triangle made of #
 */

void print_triangle(int size)
{
	int a;
	int b;

	if (size > 0)
	{
		for (a = size; a > 0; a--)
		{
			for (b = 1; b <= size; b++)
			{
				if (j >= i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			_putchar('\n');
			}
		}
	else
	{
		_putchar('\n');
	}
	}
}
