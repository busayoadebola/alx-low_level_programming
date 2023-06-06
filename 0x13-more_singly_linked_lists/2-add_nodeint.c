#include "lists.h"

/**
 * *add_nodeint - to add a new node to the beginning of the list
 * @head: the pointer to the first node
 * @n:the string number
 * Return: the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = (*head);
	(*head) = new_node;

	return (*head);
}
