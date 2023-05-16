#include "main.h"

/**
 * convert - to convert a string to integer
 * @str: the string to convert
 *
 * Return: num
 */

int convert(char *str)
{
	int num = 0;
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		num = num * 10 + (str[i] - 48);
	}
	return (num);
}

/**
 * main - to print the name of a program
 * @argc: the number of arguments passed
 * @argv: an array of the arguments passed
 * Return: 0 correct
 */

int main(int argc, char *argv[])
{
	int a = convert(argv[1]);
	int b = convert(argv[2]);
	int mul;

	if (argc < 3 || argc > 3)
	{
		printf("error\n");
		return (1);
	}
	mul = a * b;
	printf("%d\n", mul);
	return (0);
}
