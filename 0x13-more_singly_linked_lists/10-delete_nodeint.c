#include "lists.h"

/**
 * delete_nodeint_at_index - this function delete a specific node
 * @head: the input list
 * @index: the index
 * Return: 1 if it succeeded, -1 if it failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *node, *node2;
size_t i = 0;
node = *head, node2 = *head;
	if (head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = node->next;
		free(node);
		node = NULL;
		return (1);
	}
	while (node)
	{
		if (i == index)
		{
			node2->next = node->next;
			free(node);
			return (1);
		}
		i++;
		node2 = node;
		node = node->next;
	}
	return (-1);
}
