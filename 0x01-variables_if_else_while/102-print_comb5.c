#include <stdio.h>

/**
 * main - A function to print the lowest combinations of single digit
 * Return: 0 (correct)
 */
int main(void)
{
	int n;
	int l;

	for (n = 0; n <= 98; n++)
	{
		for (l = 0; l <= 99; l++)
		{
			if (l > n)
			{
				putchar((n / 10) + 0);
				putchar((n % 10) + 0);
				putchar(' ')
				putchar((l / 10) + 0);
				putchar((l % 10) + 0);
				if (n != 98 || l != 99)
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

