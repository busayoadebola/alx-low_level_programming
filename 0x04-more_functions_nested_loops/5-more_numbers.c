#include <stdio.h>
#include "main.h"

/**
 * more_numbers - to print 0 to 14 ten times
 */

void more_numbers(void)
{
	int num, i;

	for (num = 0; num < 10; num++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i < 10)
			{
				_putchar(i + '0');
			}
			else
			{
				_putchar((i / 10) + '0');
				_putchar((i % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
