#include "main.h"

/**
 * print_binary - to print the binary value of a number
 * @n: the number
 */

void print_binary(unsigned long int n)
{
	int i, c = 0;
	unsigned long int num;

	i = 63;
	while (i >= 0)
	{
		num = n >> i;
		if (num & 1)
		{
			_putchar('1');
			c++;
		}
		else if (c)
			_putchar('0');
		i--;
	}
	if (!c)
		_putchar('0');
}

