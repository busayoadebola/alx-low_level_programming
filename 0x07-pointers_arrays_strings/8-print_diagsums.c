@include "main.h"

/**
 * print_diagsums - sums od array diagonals
 * @a: the array
 * @size: the size of the array
 */

void print_diagsums(int *a, int size)
{
	int sum1, sum2;
	int y = 0;

	sum1 = 0;
	sum2 = 0;

	while (y < size)
	{
		sum1 = sum1 + a[y * size + y];
		y++;
	}

	for (y = size - 1; y >= 0; y--)
	{
		sum2 += a[y * size + (size - y - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}
