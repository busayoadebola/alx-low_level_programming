#include <stdio.h>
#include "main.h"

/**
 * print_numbers - A function to print numbers 1 to 9
 */

void print_numbers(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		_putchar(num);
	}
	_putchar('\n');
}
