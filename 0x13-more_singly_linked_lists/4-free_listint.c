#include "lists.h"

/**
 * free_listint - this function free the input list
 * @head: the input list
 */

void free_listint(listint_t *head)
{
listint_t *node;
	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
