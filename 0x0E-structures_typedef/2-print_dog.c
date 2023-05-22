#include "dog.h"

/**
 * print_dog - to print the values
 * @d: the structure to print
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
		exit;
	if (d->name == NULL)
		d->name = "(nil)";
	if (d->owner == NULL)
		d->owner = "(nil)";
	printf("Name: %s\nAge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
