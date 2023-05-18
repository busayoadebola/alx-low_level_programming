#include "main.h"

/**
 * *malloc_checked - to assign a space in memory
 * using malloc
 * @b: size of the malloc
 * Return: str a pointer
 */

void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
		exit(98);

	return (str);
}
