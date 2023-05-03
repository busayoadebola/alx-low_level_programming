#include "main.h"

/**
 * _atoi - to convert string to integer
 * @s: string to convert
 *
 * Return: 0 correct
 */

int _atoi(char *s)
{
	int a, b, n, len, f, digit;

	a = b = n = len = f = digit = 0;

	while (s[len] != '\0')
		len++;

	for (; a < len && f == 0; a++)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
	}

	if (f == 0)
		return (0);

	return (n);
}
