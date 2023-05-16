#include "main.h"

/**
 * *create_array -to create an array with unknown size
 * @size: the size of the array
 * @c: the type of the array
 *
 * Return: arr the array, NULL if failed
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a = 0;
	char *arr;

	arr = malloc(sizeof(char) * size);
	if (size == 0 || arr == NULL)
		return (NULL);
	while (a < size)
	{
		arr[a] = c;
		a++;
	}
	return (arr);
}
