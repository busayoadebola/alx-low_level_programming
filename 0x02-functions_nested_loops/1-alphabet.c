#include <stdio.h>
#include <main.h>

/**
 * main - A function to print small letters only
 *
 * Return: 0 (correct)
 */

void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
