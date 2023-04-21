#include <stdio.h>

/**
 * main - A program to write the alphabet in smal case
 * Return: 0 (correct)
 */

int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar(letter);
	}
	putchar("\n");
	return (0);
}
