#include <stdio.h>
#include "main.h"

/**
 * cap_string - captilize all word of a string
 * @arr: user input
 * Return: pointer
 */

char *cap_string(char *arr)
{
	int a, b, c;

	char al[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	a = 32;

	for (b = 0; arr[b] != '\0'; b++)
	{
		if (arr[b] >= 'b' && arr[b] <= 'z')
		{
			arr[b] = arr[b] - a;
		}
		a = 0;

		for (c = 0; al[c] != '\0'; c++)
		{
			if (al[c] == arr[b])
			{
				a = 32;
				break;
			}
		}
	}
	return (arr);
}
