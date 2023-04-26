#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_last_digit - A function to print the absolute value of integers
 * @b: is used to declare numerous variables
 *
 * Return: 0 correct
 */

int print_last_digit(int b)
{
	int n;

	n = b % 10;
	_putchar(n + '0');
	return (n);
}

