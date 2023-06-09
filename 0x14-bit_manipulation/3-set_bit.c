#include "main.h"

/**
 * set_bit - changes a bit at an index to 1
 * @n: a pointer to the number to change
 * @index: index to change
 * Return: 1 success, -1 for error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}
