#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - A function to print small letters only
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}
