#include "main.h"

/**
 * *_strpbrk - to print the firs occurence of a letter
 * @s: string to search
 * @accept: what to search for
 *
 * Return: o correct
 */

char *_strpbrk(char *s, char *accept)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == accept[i])
			return (&s[i - 1]);
		i++;
	}
	return (0);
}
