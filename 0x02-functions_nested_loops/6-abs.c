#include <stdio.h>
#include "main.h"

/**
 * _abs - computes the absolute value of an inter
 * @a: user input
 * Return: will return given value if it is an integer
 */

int _abs(int a)
{
	if (a < 0)
	{
		a = a * -1;
	}
	return (a);
}
