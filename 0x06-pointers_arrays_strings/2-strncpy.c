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
	int copy;

	for (copy = 0; copy < n && src[copy] != '\0'; copy++)
	{
		dest[copy] = src[copy];
	}
	while (copy < n)
	{
		dest[copy] = '\0';
		copy++;
	}
	return (dest);
}
