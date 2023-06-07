#include "lists.h"

/**
 * pop_listint - to delete the head node and display the
 * new head node's data
 * @head: the node to delete
 * Return: the new node data
*/

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int num;

	if (head == NULL || *head == NULL)
		return (0);

	num = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (num);
}
