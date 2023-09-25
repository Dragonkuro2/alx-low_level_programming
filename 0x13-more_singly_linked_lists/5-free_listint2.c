#include "lists.h"

/**
 * free_listint2 - this function free the inout list
 * @head: the input list
 */

void free_listint2(listint_t **head)
{
listint_t *node, *tmp;
	if (head == NULL)
		return;
	node = *head;
	while (node)
	{
		tmp = node;
		node = node->next;
		free(tmp);
	}
	*head = NULL;
}
