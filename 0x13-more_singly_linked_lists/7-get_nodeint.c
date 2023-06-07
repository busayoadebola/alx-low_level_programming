#include "lists.h"

/**
 * *get_nodeint_at_index - to get the nth node of a list
 * @head: the head of the list
 * @index: the node to get
 * Return: the node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current = head;

	if (current == NULL)
		return (NULL);

	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}

	return (current);
}
