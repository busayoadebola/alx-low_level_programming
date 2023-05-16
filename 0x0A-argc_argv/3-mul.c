#include "main.h"

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
 * main - to print the name of a program
 * @argc: the number of arguments passed
 * @argv: an array of the arguments passed
 * Return: 0 correct
 */

int main(int argc, char *argv[])
{
	int a, b, mul;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	a = _atoi(argv[1]);
	b = _atoi(argv[2]);
	mul = a * b;
	printf("%d\n", mul);
	return (0);
}
