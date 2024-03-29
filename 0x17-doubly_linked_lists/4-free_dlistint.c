#include "lists.h"

/**
 * free_dlistint - to free alinked list
 * @head: the nodes to free
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	while (head != NULL)
	{
		current = head;
		head = head->next;
		free(current);
	}
}
