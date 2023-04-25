#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _abs - A function to print the absolute value of integers
 * @int: is used to declare numerous variables
 *
 * Return: 0 correct
 */

int _abs(int b)
{
	int a;

	a = abs(b);
	_putchar(a+48);
	return (0);
}
