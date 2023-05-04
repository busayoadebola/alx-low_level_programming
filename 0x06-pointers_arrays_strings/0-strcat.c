#include "main.h"

/**
 * *_strcat - to concatenate two strings
 * @dest: where to concatenate to
 * @src: where to concatenate from
 *
 * Return: dest the concatenated value
 */

char *_strcat(char *dest, char *src)
{
	int len = 0;
	int j = 0;

	while (dest[len] != '\0')
	{
		len++;
	}
	while (src[j] != '\0')
	{
		dest[len] = src[j];
		j++;
		len++;
	}
	dest[len] = '\0';
	return (dest);
}
