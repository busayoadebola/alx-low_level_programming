#include "main.h"

/**
 * *string_nconcat - to concatenate 2 strings
 * @s1: the first string
 * @s2: the second string
 * @n: the lenght of s2 to be concatenated
 * Return: s the concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *s;
	unsigned int i = 0, j = 0, len1 = 0, len2 = 0;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;
	if (n < len2)
		s = malloc(sizeof(char) * (len1 + n + 1));
	else
		s = malloc(sizeof(char) * (len1 + len2 + 1));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
	{
		s[i] = s1[i];
	}

	while (n < len2 && i < (len1 + n))
		s[i++] = s2[j++];

	while (n >= len2 && i < (len1 + len2))
		s[i++] = s2[j++];

	s[i] = '\0';
	return (s);
}
