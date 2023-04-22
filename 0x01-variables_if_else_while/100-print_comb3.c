#include <stdio.h>

/**
 * main - A function to print the lowest combinations of single digit
 * Return: 0 (correct)
 */
int main(void)
{
	int n;
	int l;

	for (n = 48; n < 58; n++)
	{
		for (l = 49; l < 59; l++)
		{
			if (l < n)
			{
				putchar(n);
				putchar(l);
				if (n != 58 || l != 59)
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
