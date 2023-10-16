#include "main.h"

/**
 * *_memcpy - to copy one memory to another
 * @dest: memory to copy to
 * @src: memory to copy from
 * @n: no of bytes to copy
 *
 * Return: dest to copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		n--;
		i++;
	}
	return (dest);
}
