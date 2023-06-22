#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * _putchar - Entry point
 * @c: character output
 * Return: 1 if successful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
