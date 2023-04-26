#include "main.h"
#include <stdio.h>

/**
 * main - to print all natural numbers of the given input
 *
 * Return: 0 correct
 */

int main(void)
{
	int a = 0, sum = 0;

	while (a < 1024)
	{
		if ((a % 3) == 0 || (a % 5) == 0)
		{
			sum += a;
		}
	}
	a++;
	printf("%d\n", sum);
	return (0);
}

