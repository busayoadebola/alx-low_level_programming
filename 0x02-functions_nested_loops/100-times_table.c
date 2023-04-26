#include "main.h"
#include <stdio.h>

/**
 * print_times_table - A function to print the n times table
 * @n: the times table
 */

void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		int i, j, m;

		for (i = 0; i <= n; i++)
		{
			for (j = 0 ; j <= n; j++)
			{
				m = i * j;
				if (j == 0)
				{
					_putchar(m + '0');
				} else if (m < 10 && j != 0)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar(' ');
					_putchar(m + '0');
				} else if (m >= 10 && m < 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
					_putchar((m / 10) + '0');
					_putchar((m % 10) + '0');
				} else if (m >= 100)
				{
					_putchar(',');
					_putchar(' ');
					_putchar((m / 100) + '0');
					_putchar(((m / 10) % 10) + '0');
					_putchar((m % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
