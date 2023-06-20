#include <stdio.h>
#include "main.c"
/**
 * _isalpha - Checks for alphabetic character
 * @c: is input by user
 * Return: 1 if its a aphabetic charcter and 0 if it is not.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
