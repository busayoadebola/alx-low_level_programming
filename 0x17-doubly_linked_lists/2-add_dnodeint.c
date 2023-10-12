#include "lists.h"

/**
 * *add_dnodeint - to add a new node to the beginning of the list
 * @head: the pointer to the first node
 * @n:the string number
 * Return: the new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
