#include "main.h"

/**
 * word_count - to count the characters in a string
 * @s: string to count
 * Return: the string lenght
 */

int word_count(char *s)
{
	int num, c, w;

	num = w = c = 0;
	while (s[c] != '\0')
	{
		if (s[c] == ' ')
			num = 0;
		else if (num == 0)
		{
			num = 1;
			w++;
		}
		c++;
	}
	return (w);
}

/**
 * **strtow - to split a string into words
 * @str: string to split
 * Return: the array pointer correct
 */

char **strtow(char *str)
{
	char **arr, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;

	words = word_count(str);
	if (words == 0)
		return (NULL);

	arr = (char **) malloc(sizeof(char *) * (words + 1));
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i <= len)
	{
		if (str[i] == ' ' || str[i] == '\0')
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];

				*tmp = '\0';
				arr[k] = tmp - c;
				k++;
				c = 0;
			}
		else if (c++ == 0)
			start = i;

		i++;
	}
	arr[k] = NULL;
	return (arr);
}
