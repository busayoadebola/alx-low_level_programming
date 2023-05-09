#include "main.h"

/**
 * *_strpbrk - to print the firs occurence of a letter
 * @s: string to search
 * @accept: what to search for
 *
 * Return: 0 correct
 */

char *_strpbrk(char *s, char *accept)
{
	int n;

	while (s[n] >= '\0')
	{
		for (n = 0; accept[n]; n++)
		{
			if (*s == accept[n])
				return (s);
		}
		s++;
	}
	return ('\0');
}
