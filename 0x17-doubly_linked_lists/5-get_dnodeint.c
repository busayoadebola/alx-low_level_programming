#include "lists.h"

/**
 * *get_dnodeint_at_index - to get the nth node of a list
 * @head: the head of the list
 * @index: the node to get
 * Return: the node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current = head;

	while (current != NULL)
	{
		if (i == index)
		{
			return (current);
		}
		current = current->next;
		i++;
	}
	return (NULL);
}
