#include "lists.h"

/**
 * *add_nodeint_end - to add a node to the end of a list
 * @head: the node to add
 * @n: the string to add
 * Return: the position of the new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node;
	listint_t *test = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		*head = new_node;
		return (new_node);
	}
	while (test->next)
		test = test->next;

	test->next = new_node;
	return (new_node);

}
