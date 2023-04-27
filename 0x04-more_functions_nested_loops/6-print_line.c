#include "main.h"

/**
 * print_line - to print a line
 * @n: no of times to be printed
 */

void print_line(int n)
{
	int lin = 0;

	if (!(n <= 0))
	{
		while (lin <= n)
		{
			_putchar('_');
			lin++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
