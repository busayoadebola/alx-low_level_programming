#include "lists.h"

/**
 * sum_listint - to add the data in a linked list
 * @head: the list to add
 * Return: the sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
