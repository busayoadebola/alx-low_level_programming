#include "main.h"

/**
 * get_bit - to get the value of a bit at an index
 * @n: number to search
 * @index: index of the bit
 * Return: value at the index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 63)
		return (-1);
	value = 1 & (n >> index);
	return (value);
}
