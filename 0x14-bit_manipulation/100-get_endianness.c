#include "main.h"

/**
 * get_endianness - to check the endianness of an
 * architecture
 * Return: the result
 */
int get_endianness(void)
{
	unsigned int a = 1;
	char *e = (char *) &a;

	return (*e);
}
