#include <stdio.h>

/**
 * main - fibonacci series
 *
 * Return: 0 correct
 */

int main(void)
{
	int c = 0;
	unsigned long n1 = 0, n2 = 1, n;

	while (c < 50)
	{
		n =  n1 + n2;
		printf("%lu", n);

		n1 = n2;
		n2 = n;

		if (c == 49)
		{
			printf("\n");
		}
		else
		{
			printf(", ");
		}
		c++;
	}
	return (0);
}
