#include <stdio.h>

/**
 * main - To print both lower and upper case letters
 * Return: 0 (correct)
 */

int main(void)
{
	char lower = 'a';
	char upper = 'A';

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		putchar(lower);
	}
	for (upper = 'A'; upper <= 'Z'; upper++)
	{
		putchar(upper);
	}
	putchar('\n');
	return (0);
