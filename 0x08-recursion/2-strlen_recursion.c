#include "main.h"

/**
 * _strlen_recursion - to print the lenght of
 * a string
 * @s: the string to get the lenght of
 *
 * Return: len the lenght of the string
 */

int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s != '\0')
	{
		len = _strlen_recursion(s + 1);
		len++;
	}
	return (len);
}
