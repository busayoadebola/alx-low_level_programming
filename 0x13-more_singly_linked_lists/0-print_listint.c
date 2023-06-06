#include "lists.h"

/**
 * print_listint - to print the contents of a linked list
 * @h: the linked list to print
 * Return: print the list and the number in the list
 */

size_t print_listint(const listint_t *h)
{
	size_t c = 0;

	while (h)
	{
		printf("%d\n", h->n);
		c++;
		h = h->next;
	}
	return (c);
}
