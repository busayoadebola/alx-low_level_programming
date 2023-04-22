#include <stdio.h>

/**
 * main - A function to print the lowest combinations of single digit
 * Return: 0 (correct)
 */
int main(void)
{
	int n;
	int l;
	int m;

	for (n = 48; n <= 56; n++)
	{
		for (l = 49; l <= 57; l++)
		{
			for (m = 50; m <= 58; m++)
			{
				if (m > l && l > n)
				{
					putchar(n);
					putchar(l);
					putchar(m);
					if (n != 56 || l != 57)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
