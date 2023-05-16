#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum amount to change money
 * @argc: count of arguments passed
 * @argv: array of arguments passed
 *
 * Return: 0 correct, 1 failed
 */

int main(int argc, char *argv[])
{
	int num, cents;
	int j = 0;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = atoi(argv[1]);
	cents = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	while (j < 5 && num >= 0)
	{
		while (num >= coins[j])
		{
			cents++;
			num -= coins[j];
		}
		j++;
	}

	printf("%d\n", cents);
	return (0);
}
