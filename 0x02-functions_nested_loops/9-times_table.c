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
			_putchar(mult);
		}
		_putchar('\n');
	}
}
