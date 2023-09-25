#include "lists.h"

/**
 * add_nodeint_end - this function add node at the end of the list
 * @head: the list
 * @n: the data
 * Return: the address of the new element, or NULL if it failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *node, *tem;
node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);
	node->n = n;
	node->next = NULL;
	if (*head == NULL)
	{
		*head = node;
		return (node);
	}
	tem = *head;
	while (tem->next)
	{
		tem = tem->next;
	}
	tem->next = node;
	return (node);
}
