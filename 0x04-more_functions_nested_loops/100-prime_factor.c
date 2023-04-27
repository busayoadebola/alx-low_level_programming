#include <stdio.h>
#include <math.h>

/**
 * main - to print largest prime factor of the number 612852475143
 *
 * Return: 0 correct
 */

int main(void)
{
	long int a;
	long int large;
	long int b;

	a = 612852475143;

	while (a % 2 == 0)
	{
		large = 2;
		a /= 2;
	}

	for (b = 3; b <= sqrt(a); b = b + 2)
	{
		while (a % b == 0)
		{
			large = b;
			a = a / b;
		}
	}

	if (a > 2)
		large = a;

	printf("%ld\n", large);

	return (0);
}

