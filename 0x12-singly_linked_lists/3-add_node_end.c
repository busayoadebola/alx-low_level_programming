#include "lists.h"

/**
 * *add_node_end - to add a node to the end of a list
 * @head: the node to add
 * @str: the string to add
 * Return: the position of the new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node;
	list_t *test = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		return (NULL);
	}
	new_node->str = strdup(str);
	new_node->len = len;
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
