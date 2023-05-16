#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _atoi - to convert a string to integer
 * @s: the string to convert
 *
 * Return: num
 */

int _atoi(char *s)
{
	int a, b, n, len, f, digit;

	a = b = n = len = f = digit = 0;

	while (s[len] != '\0')
		len++;

	for (; a < len && f == 0; a++)
	{
		if (s[a] == '-')
			++b;

		if (s[a] >= '0' && s[a] <= '9')
		{
			digit = s[a] - '0';
			if (b % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[a + 1] < '0' || s[a + 1] > '9')
				break;
			f = 0;
		}
	}

	if (f == 0)
		return (0);

	return (n);
}

/**
 * num_status - to check if a string is empty
 * @str: the string to check
 * Return: 0 correct
 */

int num_status(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (isdigit(str[count]) != '\0')
		{
			return (0);
		}
		count++;
	}
	return (1);
}

/**
 * main - Print the name of the program
 * @argc: Count of the arguments
 * @argv: Arguments to be passed
 *
 * Return: 0 correct
 */

int main(int argc, char *argv[])
{
	int i;
	int type_change;
	int sum = 0;

	i = 1;
	while (i < argc)
	{
		if (num_status(argv[i]))
		{
			type_change = _atoi(argv[i]);
			sum = type_change + 1;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}
