#include "main.h"

/**
 * *_memset - to replace a no of bytes with a char
 * @s: memory to fill
 * @b: what to fill the memory with
 * @n: the number of spaces to fill
 *
 * Return: s the filled memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}

/**
 * *_calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element in the array
 * Return: mem a pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *mem;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(size * nmemb);
	if (mem == NULL)
		return (NULL);
	_memset(mem, 0, nmemb * size);
	return (mem);
}
