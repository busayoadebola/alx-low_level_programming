#include "lists.h"

/**
 * free_listint2 - to free alinked list
 * @head: the nodes to free
 */
void free_listint2(listint_t **head)
{
	listint_t *test;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		test = (*head)->next;
		free(*head);
		(*head) = test;
	}
	(*head) = NULL;
}
