#include "lists.h"

/**
 * reverse_listint - this function reverses a listint_t linked list
 * @head: the input list
 * Return: a pointer to the first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *node = NULL, *node2 = NULL;

	if (*head == NULL)
		return (NULL);
	node = *head;
	*head = NULL;
	while (node != NULL)
	{
		node2 = node->next;
		node->next = *head;
		*head = node;
		node = node2;
	}
	return (*head);
}
