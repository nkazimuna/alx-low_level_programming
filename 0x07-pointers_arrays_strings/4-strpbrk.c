#include <stdio.h>
#include "main.h"

/**
 * _strpbrk - searches a string for a set of bytes
 * @s: input one
 * @accept: input two
 * Return: 0
 */

char *_strpbrk(char *s, char *accept)
{
	int a;

	while (*s != 0)
	{
		for (a = 0; accept[a] != 0; a++)
		{
			if (*s == accept[a])
				return (s);
		}
		s++;
	}
	return (0);
}
