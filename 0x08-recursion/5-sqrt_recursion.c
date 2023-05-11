#include "main.h"

/**
 * _sqrt_recursion - to find the square root
 * @n: the number to find the square root of
 * Return: the square root value
 */

int _sqrt_recursion(int n)
{
	return (sqroot(n, 1));
}

/**
 * sqroot - the code to find the square root
 * @n: to find the square root of n
 * @i: the numbers to test out
 * Return: the correct value
 */

int sqroot(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);
	return (sqroot(n, i + 1));
}
