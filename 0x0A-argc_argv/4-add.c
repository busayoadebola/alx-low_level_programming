#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

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
		if (!isdigit(str[count]))
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
			type_change = atoi(argv[i]);
			sum += type_change;
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
