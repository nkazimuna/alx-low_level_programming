#include <stdio.h>
#include "main.h"

/**
 * _strlen - counts the lenght of a string
 * @s: charactrer input string
 * Return: string lenght
 */

int _strlen(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		a++;
	}
	return (a);
}
