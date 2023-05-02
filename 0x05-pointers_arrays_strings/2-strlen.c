#include "main.h"

/**
 * _strlen - to find the lenght of a string
 * @s: the string length to be found
 *
 * Return: len the length of the string
 */

int _strlen(char *s)
{
	int len;

	while (*s != '\0')
	{
		len++;
		*s++;
	}
	return (len);
}
