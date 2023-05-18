#include "main.h"

/**
 * *argstostr - to concat all arguments passed
 * into a string
 * @ac: count of arguments
 * @av: array of arguments
 * Return: str concatenated string
 */

char *argstostr(int ac, char **av)
{
	int i, n, r = 0, l = 0;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		for (n = 0; av[i][n]; n++)
		{
			l++;
		}
		i++;
	}
	l += ac;
	str = malloc(sizeof(char) * l + 1);
	if (str == NULL)
		return (NULL);

	i = 0;
	while (i < ac)
	{
		for (n = 0; av[i][n]; n++)
		{
			str[r] = av[i][n];
			r++;
		}
		if (str[r] == '\0')
		{
			str[r++] = '\n';
		}
		i++;
	}
	return (str);
}
