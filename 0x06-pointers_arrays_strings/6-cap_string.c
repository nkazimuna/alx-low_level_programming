#include <stdio.h>
#include "main.h"

/**
 * cap_string - captilize all word of a string
 * @arr: user input
 * Return: pointer
 */

char *cap_string(char *arr)
{
	int a = 0;

	while (arr[a])
	{
		while (!(arr[a] >= 'a' && arr[a] <= 'z'))
			if (arr[a - 1] == ' ' || arr[a - 1] == '\t' || arr[a - 1] == '\n' || arr[a - 1] == ',' || arr[a - 1] == ';' || arr[a - 1] == '.' || arr[a - 1] == '!' || arr[a - 1] == '?' || arr[a - 1] == '"' || arr[a - 1] == '(' || arr[a - 1] == ')' || arr[a - 1] == '{' || arr[a - 1] == '}' || a == 0)
				arr[a] -= 32;
		a++;
	}
	return (arr);
}
