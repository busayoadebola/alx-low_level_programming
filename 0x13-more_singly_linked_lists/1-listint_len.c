#include "lists.h"

/**
 * listint_len - to print the number of contents of a linked list
 * @h: the linked list to print
 * Return: print the list and the number in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		h = h->next;
		c++;
	}
	return (c);
}
