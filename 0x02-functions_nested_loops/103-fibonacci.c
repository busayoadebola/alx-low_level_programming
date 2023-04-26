#include <stdio.h>

/**
 * main - fibonacci series
 *
 * Return: 0 correct
 */

int main(void)
{
	int c = 1;
	unsigned long int n1 = 1, n2 = 2, n;

	while (c <= 33)
	{
		if (n1 < 4000000 && (n1 % 2) == 0)
		{
			n = n + n1;
		}
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;

		c++;
	}
	printf("%lu\n", n);

	return (0);
}
