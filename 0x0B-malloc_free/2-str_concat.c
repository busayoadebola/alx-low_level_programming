#include "main.h"

/**
 * *str_concat - to join 2 strings
 * @s1: the first string
 * @s2: the second string
 * Return: n the joined string
 */

char *str_concat(char *s1, char *s2)
{
	int len = 0;
	int j = 0;
	char *n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[len] != '\0' && s2[j] != '\0')
		len++;
		j++;

	n = malloc(sizeof(char) * (len + j + 1));
	if (n == NULL)
		return (NULL);

	len = j = 0;
	while (s1[len] != '\0')
	{
		n[len] = s1[len];
		len++;
	}
	while (s2[j] != '\0')
	{
		n[len] = s2[j];
		len++;
		j++;
	}
	n[len] = '\0';
	return (n);
}
