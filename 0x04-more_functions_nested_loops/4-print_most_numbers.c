#include <stdio.h>
#include "main.h"

/**
 * print_most_numbers - A program toprint 1-9 without 2,4
 */

void print_most_numbers(void)
{
	int num = 0;

	for (num = 48; num <= 57; num++)
	{
		if (num != 50 && num != 52)
		{
			putchar(num);
		}
	}
	putchar('\n');
}

