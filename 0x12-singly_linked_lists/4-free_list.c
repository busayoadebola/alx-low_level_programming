#include "lists.h"

/**
 * free_list - to free alinked list
 * @head: the nodes to free
 */

void free_list(list_t *head)
{
	list_t *test;

	while (head != NULL)
	{
		test = head->next;
		free(head->str);
		free(head);
		head = test;
	}

}
