#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - to print all natural numbers of the given input
 * @n: the number to be inputed
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n <= 98)
		{
			if (n < 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n++;

		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			if (n > 98)
			{
				printf("%d, ", n);
			}
			else
			{
				printf("%d", n);
			}
			n--;
		}
	}
}
