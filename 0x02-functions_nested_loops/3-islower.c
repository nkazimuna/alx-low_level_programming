#include <stdio.h>
#include "main.h"

/**
 * _islower - checks for lowercase characters from given input.
 * Return 1 if lowercase and 0 if it is not. 
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
