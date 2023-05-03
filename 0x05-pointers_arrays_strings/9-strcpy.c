#include "main.h"

/**
 * *_strcpy - to copy a string in a dest to another
 * @dest: the destination to copy to
 * @src: the place to copy from
 *
 * Return: dest the pointer
 */

char *_strcpy(char *dest, char *src)
{
	int str_len = 0;
	int copy = 0;

	while (*(src + str_len) != '\0')
	{
		str_len++;
	}
	while (copy < str_len)
	{
		dest[copy] = src[copy];
		copy++;
	}
	dest[str_len] = '\0';
	return (dest);
}
