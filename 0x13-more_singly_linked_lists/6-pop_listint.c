#include "lists.h"

/**
 * pop_listint - this function remove the head pointer of the list
 * @head: the input list
 * Return: returns the head node’s data (n)
 */

int pop_listint(listint_t **head)
{
int data;
listint_t *tmp;
	if (*head == NULL)
		return (0);
	tmp = *head;
	data = (*head)->n;
	*head = tmp->next;
	free(tmp);
	return (data);
}
