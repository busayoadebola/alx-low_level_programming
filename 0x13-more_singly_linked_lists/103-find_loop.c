#include "lists.h"

/**
 * find_listint_loop - search for a loop in a linked list
 * @head: list to search through
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *normal = head;
	listint_t *speed = head;

	if (head == NULL)
		return (NULL);

	while (normal && speed && speed->next)
	{
		speed = speed->next->next;
		normal = normal->next;
		if (speed == normal)
		{
			normal = head;
			while (normal != speed)
			{
				normal = normal->next;
				speed = speed->next;
			}
			return (speed);
		}
	}
	return (NULL);
}
