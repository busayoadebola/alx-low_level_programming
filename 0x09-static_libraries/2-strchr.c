#include "main.h"

/**
 * *_strchr - to locate a character in astring
 * @s: the string to search
 * @c: the character to locate
 *
 * Return: 0 success
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')
	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (0);
}
