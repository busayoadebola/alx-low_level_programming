#include <stdio.h>
#include "main.h"

/**
 * print_alphabet - A function to print small letters only
 */

void print_alphabet_x10(void)
{
	char letter;
	int i;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		for (i = 0; i < 10; i++)
		{
			_putchar(letter);
		}
	}
	_putchar('\n');
}
