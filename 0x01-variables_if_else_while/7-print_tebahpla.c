#include <stdio.h>

/**
 * main - A program to write the alphabet in small case in reverse
 * Return: 0 (correct)
 */

int main(void)
{
	char letter = 'z';

	for (letter = 'z'; letter >= 'a'; letter--)
	{
		putchar(letter);
	}
	putchar('\n');
	return (0);
}
