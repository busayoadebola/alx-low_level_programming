#include "main.h"

/**
 * print_rev - to reverse a string
 * @s: the string to reverse
 */

void print_rev(char *s)
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
