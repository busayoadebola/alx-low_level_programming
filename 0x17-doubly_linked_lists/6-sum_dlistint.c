#include "lists.h"

/**
 * sum_dlistint - to add the data in a linked list
 * @head: the list to add
 * Return: the sum
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
