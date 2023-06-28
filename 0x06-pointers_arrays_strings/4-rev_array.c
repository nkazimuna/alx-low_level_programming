#include <stdio.h>
#include "main.h"

/**
 * recerse_array - reverses content of an array
 * @a: user input
 * @n: user input
 */

void reverse_array(int *a, int n)
{
	int b, c;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
