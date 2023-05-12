#include "main.h"
#include <ctype.h>

/**
 * _isalpha - A function to check if a character is alphabetic
 * @c: letter to be checked
 *
 * Return: 1 if c is alphabetic else return 0
 */

int _isalpha(int c)
{
	if (isalpha(c) != 0)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
