#include "main.h"
/**
 * flip_bits - the no of bits to moove from
 * number to another
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int pos;
	unsigned long int move = n ^ m;

	i = 63;
	while (i >= 0)
	{
		pos = move >> i;
		if (pos & 1)
			count++;
		i--;
	}
	return (count);
}

