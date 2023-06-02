#include "lists.h"

/**
 * list_len - to print the number of elements
 * in a loist
 * @h: the list
 * Return: the element count
 */

size_t list_len(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}
