#include <stdio.h>
#include "main.h"

/**
 * rev_string - reverses a string
 * @s: input
 */

void rev_string(char *s)
{
	int a, b = 0;
	char ac;

	while (s[b] != 0)
	{
		b++;
	}
	b--;

	for (a = 0; a <= b; b--, a++)
	{
		ac = s[a];
		s[a] = s[b];
		s[b] = ac;
	}
}
