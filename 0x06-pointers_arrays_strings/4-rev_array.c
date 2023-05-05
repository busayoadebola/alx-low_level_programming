#include "main.h"
#include <stdlib.h>

/**
 * reverse_array - to print an array in reverse
 * @a: array to reverse
 * @n: array size
 */

void reverse_array(int *a, int n)
{
	int temp;

	for (int i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
