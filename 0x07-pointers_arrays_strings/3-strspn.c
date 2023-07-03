#include <stdio.h>
#include "main.h"

/**
 * _strspn - gets the lenght of a prefix
 * @s: input one
 * @accept: input two
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, c;

	for (a = 0; s[a] != 0; a++)
	{
		c = 0;
		for (b = 0; accept[b] != 0; b++)
		{
			if (s[a] == accept[b])
			{
				c = 1;
			}
		}
		if (c == 0)
		{
			break;
		}
	}
	return (a);
}
