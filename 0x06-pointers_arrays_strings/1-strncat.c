#include "main.h"

/**
 * *_strncat - to concatenate two strings
 * @dest: where to concatenate to
 * @src: where to concatenate from
 * @n: number of bytes to concat
 *
 * Return: dest the concatenated value
 */

char *_strncat(char *dest, char *src, int n)
{
	int len = 0;
	int j = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (j < n && src[j] != '\0')
	{
		dest[len] = src[j];
		j++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
