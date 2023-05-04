#include "main.h"

/**
 * *_strncpy - to copy a string in a dest to another
 * @dest: the destination to copy to
 * @src: the place to copy from
 * @n: amount to copy
 *
 * Return: dest the pointer
 */

char *_strncpy(char *dest, char *src, int n)
{
	int str_len = 0;
	int copy = 0;

	while (dest[str_len] != '\0')
	{
		str_len++;
	}
	while (copy < n && copy < str_len)
	{
		dest[copy] = src[copy];
		copy++;
	}
	dest[str_len] = '\0';
	return (dest);
}
