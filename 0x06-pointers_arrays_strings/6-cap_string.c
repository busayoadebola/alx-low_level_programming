#include "main.h"

/**
 * cap_string - to capitalize first word letter
 * @u: the string to capitalize
 *
 * Return: u capitalized
 */
char *cap_string(char *u)
{
	int i = 0;

	while (u[i])
	{
		while (!(u[i] >= 'a' && u[i] <= 'z'))
		{
			i++;
		}
		if (u[i - 1] == ' ' ||
			u[i - 1] == '\t' ||
			u[i - 1] == '\n' ||
			u[i - 1] == ',' ||
			u[i - 1] == ';' ||
			u[i - 1] == '.' ||
			u[i - 1] == '!' ||
			u[i - 1] == '?' ||
			u[i - 1] == '"' ||
			u[i - 1] == '(' ||
			u[i - 1] == ')' ||
			u[i - 1] == '{' ||
			u[i - 1] == '}' ||
			i == 0)
		{
			u[i] = u[i] - 32;
		}
		i++;
	}
	return (u);
}
