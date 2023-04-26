#include "main.h"
#include <stdio.h>

/**
 * times_table - A function to print the 9 times table
 */

void times_table(void)
{
	int i, j, mult;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0 ; j <= 9; j++)
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
