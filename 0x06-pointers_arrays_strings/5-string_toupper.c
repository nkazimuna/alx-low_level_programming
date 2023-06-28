#include <stdio.h>
#include "main.h"
#include <stddef.h>

/**
 * string_toupper - changes all lowercase letter of a string to uppercase
 * @z: pointer
 * Return: pointer
 */

char *string_toupper(char *z)
{
	int a = 0;

	while (z[a] != '\0')
	{
		if (z[a] >= 'a' && z[a] <= 'z')
			z[a] = z[a] - 32;
		a++;
	}
	return (z);
}
