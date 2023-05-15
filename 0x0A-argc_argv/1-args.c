#include "main.h"

/**
 * main - to print the name of a program
 * @argc: the number of arguments passed
 * @argv: an array of the arguments passed
 * Return: 0 correct
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%d\n", argc);
	}

	return (0);
}
