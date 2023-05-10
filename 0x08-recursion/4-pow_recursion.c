#include "main.h"

/**
 * _pow_recursion - to get the power of a number
 * @x: the number to get the power of
 * @y: the power
 * Return: -1 if the power is less than 0
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
