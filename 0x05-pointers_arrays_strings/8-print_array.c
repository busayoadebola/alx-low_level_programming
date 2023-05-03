#include "main.h"

/**
 * print_array - to print an array
 * @a: arry to print
 * @n: number of element of array to print
 */

void print_array(int *a, int n)
{
	int count = 0;

	while (count < (n - 1))
	{
		printf("%d, ", a[count]);
		count++;
	}
	if (count == (n - 1))
	{
		printf("%d", a[n - 1]);
	}
	printf("\n");
}
