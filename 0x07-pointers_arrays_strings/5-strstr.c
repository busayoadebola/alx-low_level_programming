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
	while (*haystack != '\0')
	{
		char *l = haystack;
		char *p = needle;

		while (*l == *p && *p != '\0')
		{
			l++;
			p++;
		}
		if (*p == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
