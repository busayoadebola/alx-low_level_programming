#include "function_pointers.h"

/**
 * array_iterator -  to apply a function to each
 * element of an array
 * @array: the array to use
 * @size: size of the array
 * @action: the function to implement
 * Return: empty if null
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a = 0;

	if (array == NULL || action == NULL)
		return;

	while (a < size)
	{
		action(array[a]);
		a++;
	}
}
