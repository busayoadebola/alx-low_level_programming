#include "main.h"

/**
 * binary_to_uint - converting a binary number
 * to unsigned int
 * @b: the number to convert
 * Return: the converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int a = 1;
	unsigned int i = 0;
	int c;
	unsigned int _str_len;

	_str_len = strlen(b);
	for (c = _str_len - 1; c >= 0; c--)
	{
		if (b == NULL)
			return (0);
		if (b[c] != '0' && b[c] != '1')
			return (0);
		if (b[c] == '1')
		{
			i = i + a;
		}
		a = a * 2;
	}
	return (i);
}
