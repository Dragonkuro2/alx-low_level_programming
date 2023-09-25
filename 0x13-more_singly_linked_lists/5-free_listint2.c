#include "lists.h"

/**
 * free_listint2 - this function free the inout list
 * @head: the input list
 */

void free_listint2(listint_t **head)
{
listint_t *node;
	if (*head == NULL)
		return;
	while (*head)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
	}
*head = NULL;
}
