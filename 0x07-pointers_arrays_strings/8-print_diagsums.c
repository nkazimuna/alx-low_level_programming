#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - prints the sum of two diagonal of a square
 * @a: input one
 * @size: input two
 */

void print_diagsums(int *a, int size)
{
	int  b, ab = 0, bb = 0;

	b = 0;

	while (b < size)
	{
		ab = ab + *(a + b * size + b);
		bb = bb + *(a + b * size + size - b - 1);


		b++;
	}
	printf("%b, %b\n", ab, bb);
}
