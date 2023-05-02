#include "main.h"

/**
 * puts2 - to print other numbers
 * @str: array to print
 */

void puts2(char *str)
{
	int len = 0, count = 0, mod = 0;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		len++;
	}
	count = len - 1;
	while (mod <= count)
	{
		if (mod % 2 == 0)
		{
			_putchar(str[mod]);
		}
		mod++;
	}
	_putchar('\n');
}
