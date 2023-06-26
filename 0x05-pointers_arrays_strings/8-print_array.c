#include <stdio.h>
#include "main.h"

/**
 * print_array - Prints n elements of an array
 * @a: first input
 * @n: Second input
 */

void print_array(int *a, int n)
{
	int a1;

	for (a1 = 0; a1 < n; a1++)
	{
		if (a1 == 0)
		{
			printf("%d", a[a1]);
		}
		else
		{
			printf(", %d", a[a1]);
		}
		printf("\n");
	}
}
