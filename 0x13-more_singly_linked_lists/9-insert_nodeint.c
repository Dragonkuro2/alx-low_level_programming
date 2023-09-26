#include "lists.h"

/**
 * insert_nodeint_at_index - this function insert a node in specific index
 * @head: the input list
 * @idx: the index of the new element
 * @n: the data of the new index
 * Return: the address of the new node, or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
listint_t *node, *node2 = malloc(sizeof(listint_t));
size_t i = 0;

	if (head == NULL || node2 == NULL)
		return (NULL);
	node2->n = n;
	node2->next = NULL;
	if (idx == 0)
	{
		node2->next = *head;
		*head = node2;
		return (node2);
	}
	node = *head;
	while (node != NULL)
	{
		if (i == idx - 1)
		{
			node2->next = node->next;
			node->next = node2;
			return (node2);
		}
	i++;
	node = node->next;
	}
	free(node2);
	return (NULL);
}
