#include "lists.h"

size_t looped_list(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_list - gets the number of unique nodes in a looped list linked list.
 * @head: A pointer to the head of the listint_t to check.
 * Return: If the list is not looped - 0.
 */

size_t looped_list(const listint_t *head)
{
	const listint_t *first, *second;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	first = head->next;
	second = (head->next)->next;

	while (second != NULL)
	{
		if (first == second)
		{
			first = head;
			while (first != second)
			{
				nodes++;
				first = first->next;
				second = second->next;
			}
			first = first->next;
			while (first != second)
			{
				nodes++;
				first = first->next;
			}
			return (nodes);
		}
		first = first->next;
		second = (second->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 * Return: The number of nodes.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_list(head);
	if (nodes == 0)
	{
		while (head != NULL)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			nodes++;
		}
	}
	else
	{
		while (index < nodes)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
			index++;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
