#include "lists.h"

/**
 * add_node_end - this function add a node at the end
 * @head: the input pointer
 * @str: the input string
 * Return:the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node, *current;
	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(struct list_s));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->next = NULL;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = node;
	*head = node;
	return (node);
}
