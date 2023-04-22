#include <stdio.h>

/**
 * main - A program to write the alphabet in small case minus q and e
 * Return: 0 (correct)
 */

int main(void)
{
	char letter = 'a';

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'e' && letter != 'q')
		{
			putchar(letter);
		}
	}
	putchar('\n');
	return (0);
}

