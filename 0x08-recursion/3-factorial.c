#include "main.c"

/**
 * factorial - to get the factorial of a number
 * @n: the factorial number
 * Return: -1 if less than 0
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
