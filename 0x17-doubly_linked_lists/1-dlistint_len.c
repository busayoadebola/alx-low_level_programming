#include "lists.h"

/**
 * dlistint_len - to print the number of contents of a linked list
 * @h: the linked list to print
 * Return: print the list and the number in the list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node_count = 0;

	while (h != NULL)
	{
		h = h->next;
		node_count++;
	}
	return (node_count);
}
