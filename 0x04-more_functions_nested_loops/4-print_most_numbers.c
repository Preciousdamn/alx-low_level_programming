#include <stdio.h>
#include "main.h"

/**
 * print_most numbers - function that prints all numbers from
 * 0 t0 9 except 2 and 4
 *
 * Return: returns nothing
 */

void print_most_numbers(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		if ((n == 50) || (n == 52))
		{
			continue;
		}
		putchar(n);
	}
	putchar(10);
}
