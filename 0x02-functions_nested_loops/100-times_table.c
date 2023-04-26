#include "main.h"
#include <stdio.h>

/**
 * print_times_table - A function to print the n times table
 * @n: the times table
 */

void print_times_table(int n)
{
	int i, j, mult;

	for (i = 0; i <= n; i++)
	{
		for (j = 0 ; j <= n; j++)
		{
			mult = i * j;
			if (j == 0)
			{
				_putchar(mult + '0');
			}
			else if (mult < 10 && j != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(mult + '0');
			}
			else if (mult >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((mult / 10) + '0');
				_putchar((mult % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
