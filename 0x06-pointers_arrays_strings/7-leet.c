#include "main.h"

/**
 * *leet - to ghange
 * @r: value
 *
 * Return: r correct
 */

char *leet(char *r)
{
	int i, j;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (i = 0; r[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (r[i] == s1[j])
			{
				r[i] = s2[j];
			}
		}
	}
	return (r);
}
