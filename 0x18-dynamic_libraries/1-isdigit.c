#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _isdigit - A function to check if an entry is a digit
 * @c: letter to be checked
 *
 * Return: 1 if c is digit else return 0
 */

int _isdigit(int c)
{
	if (isdigit(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
