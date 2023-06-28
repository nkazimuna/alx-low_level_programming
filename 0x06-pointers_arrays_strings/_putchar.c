#include <stdio.h>
#include "main.h"

/**
 * _putchar - prins the c input
 * @c: input by user
 * Return: 1 successful, -1 unsuccessful
 *
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
