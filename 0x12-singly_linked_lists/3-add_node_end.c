#include "lists.h"

/**
 * add_node_end - this function add a node at the end
 * @head: the input pointer
 * @str: the input string
 * Return:the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
list_t *node;
	if (head == NULL)
		return (NULL);
	node = malloc(sizeof(struct list_s));
	if (node == NULL)
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
	node->next = *head;
	*head = node;
	return (node);
}
