#include "main.h"

/**
 * rev_string - to reverse a string
 * @s: the string to reverse
 */

void rev_string(char *s)
{
	int rev = 0;
	int a;

	while (*s != '\0')
	{
		rev++;
		s++;
	}
	s--;
	a = rev;
	while (a > 0)
	{
		_putchar(*s);
		s--;
		a--;
	}

	_putchar('\n');
}
