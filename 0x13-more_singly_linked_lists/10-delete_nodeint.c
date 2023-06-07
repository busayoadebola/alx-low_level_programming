#include "lists.h"

/**
 * *delete_nodeint_at_index - deletes a new node in a given index
 * @head: pointer to the first node in the list
 * @index: the given index
 * Return: a pointer to the new node
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current_node;
	listint_t *tmp = *head;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (tmp == NULL || (tmp->next) == NULL)
			return (-1);
		tmp = tmp->next;
	}

	current_node = tmp->next;
	tmp->next = current_node->next;
	free(current_node);
}
