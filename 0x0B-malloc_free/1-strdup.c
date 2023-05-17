#include "main.h"

/**
 * *_strdup - to make an array with a copy of a string
 * @str: the string to be copied
 *
 * Return: copy
 */

char *_strdup(char *str)
{
	char *copy;
	int c = 0;
	int r = 0;

	if (str == NULL)
		return (NULL);

	while (str[c] != '\0')
		c++;

	copy = malloc(sizeof(char) * (c + 1));
	if (copy == NULL)
		return (NULL);
	for (r = 0; str[r]; r++)
		copy[r] = str[r];
	return (copy);
}
