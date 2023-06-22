#include <stdio.h>
#include "main.h"

/**
 * _isdigit - checks for a digit
 * @c: user input
 * Return: 1 if a digit, o if not
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
