#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"

/**
 * main - the main cose
 * @argc: the argument count
 * @argv: the array of arguements
 * Return: success
 */

int main(int argc, char *argv[])
{
	int bytes, i;
	char *point;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	point = (char *)main;
	i = 0;
	while (i < bytes)
	{
		if (i == bytes - 1)
		{
			printf("%02hhx\n", point[i]);
			break;
		}
		printf("%02hhx ", point[i]);
		i++;
	}
	return (0);
}
