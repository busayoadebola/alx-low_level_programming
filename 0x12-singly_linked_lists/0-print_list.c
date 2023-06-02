#include "lists.h"

/**
 * print_list - to print the contents of a linked list
 * @h: the linked list to print
 * Return: the count of thr element
 */

size_t print_list(const list_t *h)
{
	size_t c = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", h->len, h->str);
		h = h->next;
		c++;
	}
	return (c);
}
