#include <stdio.h>
#include "main.h"

/**
 * print_last_digit - print last digit of a number
 * @a: user input
 * Return: value of the last digit
 */

int print_last_digit(int a)
{
	if (a < 0)
		a = a * -1;
	_putchar((a % 10) + '0');
	return (a % 10);
}
