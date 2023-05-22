#include "dog.h"

/**
 * free_dog - to free the memory allocated for
 * the struct dog
 * @d: the dog structure
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}

