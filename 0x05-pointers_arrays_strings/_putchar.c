#include "main.h"
#include <unistd.h>

/**
 * _putchar - prints the char c
 * @c: user input
 * Return: 1 when successful and -1 when unsuccessful
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
