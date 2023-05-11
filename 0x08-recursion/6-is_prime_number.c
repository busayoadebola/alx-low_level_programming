#include "main.h"

/**
 * is_prime_number - to find out if a number
 * is prime or not
 * @n: the number
 * Return: 1 if n is prime
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime(n, n - 1));
}

/**
 * prime - the code to find the prime status
 * @n: to find the prime status
 * @i: the iteration
 * Return: the correct status
 */

int prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
