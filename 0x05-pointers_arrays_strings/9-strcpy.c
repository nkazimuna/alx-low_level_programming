#include <stdio.h>
#include "main.h"

/**
 * _strcpy - prints string pointed too
 * @dest: input one
 * @src: input too
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int a;

	for (a = 0; src[a] != '\0'; a++)
	{
		dest[a] = src[a];
	}
	dest[a] = '\0';

	return (dest);
}
