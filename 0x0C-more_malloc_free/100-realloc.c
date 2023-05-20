#include "main.h"

/**
 * *_realloc - to reallocate a memory block
 * @ptr: pointer to the previsouly allocated memory
 * @old_size: size of the old allocated memory
 * @new_size: new size of the new memory block
 * Return: new_ptr the new pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == 0)
		return (malloc(new_size));

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);

	old_ptr = ptr;
	if (new_size < old_size)
	{
		i = 0;
		while (i < new_size)
			new_ptr[i] = old_ptr[i];
			i++;
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			new_ptr[i] = old_ptr[i];
	}
	free(ptr);
	return (new_ptr);
}
