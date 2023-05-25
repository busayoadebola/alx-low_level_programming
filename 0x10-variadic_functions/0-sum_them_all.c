#include "variadic_functions.h"

/**
 * sum_them_all - to sum all the arguements provided
 * @n: the number of arguements
 * Return: 0 if n is 0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list apv;
	unsigned int i, sum;

	va_start(apv, n);
	if (n == 0)
		return (0);

	sum = 0;
	for (i = 0; i < n; i++)
		sum += va_arg(apv, int);

	va_end(apv);
	return (sum);
}
