#include "main.h"

/**
 * puts_half - is to print the second half of an array
 * @str: the str to print
 */

void puts_half(char *str)
{
	int arr, n, len;

	len = 0;

	for (arr = 0; str[arr] != '\0'; arr++)
		len++;

	n = (len / 2);

	if ((len % 2) == 1)
		n = ((len + 1) / 2);

	for (arr = n; str[arr] != '\0'; arr++)
		_putchar(str[arr]);
	_putchar('\n');
}
