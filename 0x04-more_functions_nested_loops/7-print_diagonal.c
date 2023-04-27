#include "main.h"

/**
 * print_diagonal - to print diagonally
 * @n: times to print
 */

void print_diagonal(int n)
{
	if (!(n <= 0))
	{
		int a, b;

		for (a = 0; a < n; a++)
		{
			for (b = 0; b < n; b++)
			{
				if (b == a)
					_putchar('\\');
				else if (b < a)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
