#include <stdio.h>
#include "main.h"

/**
 * leet - encodes a string
 * @str: string input
 * Return: Always 0
 */

char *leet(char *str)
{
	int a, b;
	char al[] = {'a', 'e', 'o', 't', 'l', '\0'};
	char bl[] = {'A', 'E', 'O', 'T', 'L', '\0'};
	char cl[] = {'4', '3', '0', '7', '1', '\0'};

	for (a = 0; str[a] != '\0'; a++)
	{
		for (b = 0; b < 5; b++)
		{
			if (str[a] == al[b] || str[a] == bl[b])
			{
				str[a] = cl[b];
			}
		}
	}
	return (str);
}
