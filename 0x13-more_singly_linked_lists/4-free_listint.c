#include "lists.h"

/**
 * free_listint - to free alinked list
 * @head: the nodes to free
 */
void free_listint(listint_t *head)
{
	listint_t *test;

	while (head != NULL)
	{
		test = head->next;
		free(head);
		head = test;
	}
}
