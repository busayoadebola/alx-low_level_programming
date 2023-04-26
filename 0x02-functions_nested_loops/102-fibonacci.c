#include <stdio.h>

/**
 * main - fibonacci series
 *
 * Return: 0 correct
 */

int main(void)
{
	int n1 = 0, n2 = 1, c = 0, n;

	while (c < 50)
	{
		n =  n1 + n2;
		printf("%u", n);

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
