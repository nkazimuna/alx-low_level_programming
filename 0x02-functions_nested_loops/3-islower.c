#include <stdio.h>
#include "main.h"

/**
 * _islower - Entry point
 * @c: to be input by user
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
