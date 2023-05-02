#include "main.h"

/**
 * swap_int -  to swap the values of two integers
 * @a: the first intger
 * @b: the second integer
 */

void swap_int(int *a, int *b)
{
	int c, d;

	c = *a;
	d = *b;
	*a = d;
	*b = c;
}
