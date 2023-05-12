#include "main.h"
#include <ctype.h>

/**
 * _isupper - A function to check if a letter is in upper case
 * @c: letter to be checked
 *
 * Return: 1 if c is uppercase else return 0
 */

int _isupper(int c)
{
	if (isupper(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
