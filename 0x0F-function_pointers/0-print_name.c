#include "function_pointers.h"

/**
 * print_name - to print a name
 * @name: the name to print
 * @f: a pointer to the function
 * Return: empty
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
