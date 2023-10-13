#include "lists.h"

/**
 * *add_dnodeint_end - to add a node to the end of a list
 * @head: the node to add
 * @n: the string to add
 * Return: the position of the new node
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		new->prev = NULL;
		*head = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;

		last->next = new;
		new->prev = last;
	}
	return (new);
}
