#include <stdio.h>
#include "main.h"
#include <ctype.h>

/**
 * _islower - A function to check if a letter is in small case
 * @c: letter to be checked
 *
 * Return: 1 if c is lowercase else return 0
 */

int _islower(int c)
{
	if (islower(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
