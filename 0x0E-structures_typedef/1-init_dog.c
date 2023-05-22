#include "dog.h"

/**
 * init_dog - to initialize a structure
 * @d: the structure name
 * @name: the first parameter
 * @age: the second parameter
 * @owner: the third parameter
 * Return: 0 correct
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
