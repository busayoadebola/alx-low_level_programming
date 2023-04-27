#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * positive_or_negative - to check if the output is +ve or -ve
 *
 *Return: 0 (correct)
 */
int positive_or_negative(void)
{
	int n;

	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
