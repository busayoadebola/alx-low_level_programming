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
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		n--;
		i++;
	}
	return (s);
}
