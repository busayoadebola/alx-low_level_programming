#include "main.h"

/**
 * _strspn - to get the lenght of a string
 * @s: the original string
 * @accept: the string to count
 *
 * Return: a the lenght of string
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0;
	int b;

	while (s[a] >= '\0')
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			{
				a++;
				break;
			}
			else if (accept[b + 1] == '\0')
				return (a);
		}
		s++;
	}
	return (a);
}
