#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * print_sign - A function to check the sign of a character
 * @n: letter to be checked
 *
 * Return: 1 if +ve, -1 if -ve, 0 if 0
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}

