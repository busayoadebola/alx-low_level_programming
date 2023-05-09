#include "main.h"

/**
 * *_strstr - to find a string
 * @haystack: where to search
 * @needle: what to search for
 *
 * Return: 0 correct
 */

char *_strstr(char *haystack, char *needle)
{
	int n;

	while (*haystack)
	{
		for (n = 0; needle[n]; n++)
		{
			if (haystack[n] == needle[n])
				return (needle);
		}
		haystack++;
	}
	return (0);
}
