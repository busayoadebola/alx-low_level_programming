#include "function_pointers.h"

/**
 * int_index - to check for an integer
 * @array: the array to search
 * @size: the array size
 * @cmp: the function to perform
 * Return: -1 if it is null or the index if correct
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int a = 0;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	while (a < size)
	{
		if (cmp(array[a]))
			return (a);
		a++;
	}
	if (cmp(array[a]) == 0)
		return (-1);
}
