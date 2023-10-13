#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node
 * at a given index in a dlistint_t linked list.
 * @head: Pointer to a pointer to the head of the list.
 * @index: Index of the node to be deleted (starting from 0).
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current;
	unsigned int i;

	if (*head == NULL)
		return (-1);
	current = *head;
	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}
	for (i = 0; current != NULL && i < index; i++)
	{
		current = current->next;
	}
	if (current == NULL)
		return (-1);
	current->prev->next = current->next;
	if (current->next != NULL)
		current->next->prev = current->prev;

	free(current);
	return (1);
}
