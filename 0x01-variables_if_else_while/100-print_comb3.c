#include <stdio.h>

/**
 * main - A function to print the lowest combinations of single digit
 * Return: 0 (correct)
 */
int main(void)
{
	int n;
	int l;

	for (n = 48; n < 57; n++)
	{
		for (l = 49; l < 58; l++)
		{
			if (l < n)
			{
				putchar(n);
				putchar(l);
				if (n != 57 || l != 58)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
