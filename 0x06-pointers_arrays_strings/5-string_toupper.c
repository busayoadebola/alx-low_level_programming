#include "main.h"

/**
 * string_toupper - converting to uppercase
 * @u: string to convert
 *
 * Return: u the changed array
 */

char *string_toupper(char *u)
{
	int i;

	for (i = 0; u[i] != '\0'; i++)
	{
		if (u[i] >= 'a' && u[i] <= 'z')
		{
			u[i] = u[i] - 32;
		}
	}
	return (u);
}

