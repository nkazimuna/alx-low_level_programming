#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int a = 0;

	while (a < 100)
	{
		a++;
		if ((a % 3) != 0 && (a % 5) != 0)
		{
			printf("%d", a);
		}
		else if ((a % 3) == 0 && (a % 5) != 0)
		{
			printf("Fizz");
		}
		else if ((a % 3) != 0 && (a % 5) == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("FizzBuzz");
		}
		if (a < 100)
		{
			putchar(32);
		}
	}
	putchar('\n');
	return (0);
}
