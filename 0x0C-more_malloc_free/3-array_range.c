#include "main.h"

/**
 * *array_range - to create an array of integers
 * @min: minimum range of values
 * @max: maximum range of values
 * Return: num a pointer to the new array
 */

int *array_range(int min, int max)
{
	int *num;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	num = malloc(sizeof(int) * size);
	if (num == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		num[i] = min++;
		i++;
	}
	return (num);
}
