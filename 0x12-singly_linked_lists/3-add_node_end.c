#include "lists.h"

/**
 * add_node_end - this function add a node at the end
 * @head: the input pointer
 * @str: the input string
 * Return:the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *node, *node2 = *head;
	node = malloc(sizeof(list_t));
	if (node == NULL || node == NULL)
		return (NULL);
	if (str)
	{
		node->str = strdup(str);
		if (node->str == NULL)
		{
			free(node);
			return (NULL);
		}
		node->len = strlen(node->str);
	}
	if (node2)
	{
		while (node2->next != NULL)
			node2 = node2->next;
		node2->next = node;
	}
	else
		*head = node;
	return (node);
}
