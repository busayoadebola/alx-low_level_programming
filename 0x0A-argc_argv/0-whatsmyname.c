#include "main.h"

/**
 * main - to print the name of a program
 * @argc: the number of arguments passed
 * @argv: an array of the arguments passed
 * Return: 0 correct
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("argv[%d] = %s\n", i, argv[i]);
	}

	return (0);
}
