#include <stdio.h>
#include "main.h"

/**
 * swap_int - swap values of two integers
 * @a: first value pointer
 * @b: second value pointer
 */

void swap_int(int *a, int *b)
{
	int swapedval;

	swapedval = *a;
	*a = *b;
	*b = swapedval;
}
