#include "lists.h"

/**
 * add_node - this function add a new node at the beginning of the linkedlist
 * @head: the input pointer
 * @str: this input string
 * Return: it return the address of the new element or null if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *node;
	node = malloc(sizeof(struct list_s));
	if (node == NULL)
		return (NULL);
	node->str = strdup(str);
	if (node->str == NULL)
	{
		free(node);
		return (NULL);
	}
	node->next = *head;
	*head = node;
	return (node);
}
