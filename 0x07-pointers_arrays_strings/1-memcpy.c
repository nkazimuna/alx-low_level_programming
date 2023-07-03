#include <stdio.h>
#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: input one
 * @src: input two
 * @n: input three
 * Return: dest
 */


char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
