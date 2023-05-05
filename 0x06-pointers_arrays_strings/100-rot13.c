#include "main.h"

/**
 * *rot13 - to encode a string
 * @r: the string to encode
 *
 * Return: r
 */

char *rot13(char *r)
{
	int i, j;

	char s1[] =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char s2[] =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; r[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (r[i] == s1[j])
			{
				r[i] = s2[j];
				break;
			}
		}
	}
	return (r);
}
