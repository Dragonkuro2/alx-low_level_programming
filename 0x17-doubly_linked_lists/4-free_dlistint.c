#include "lists.h"

/**
 * free_dlistint - function that frees a list
 * @head: the head of the node
 * Return: no return value
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *here;
	dlistint_t *next_n;

	if (head)
	{
		here = head;
		next_n = head->next;
		while (next_n)
		{
			free(here);
			here = next_n;
			next_n = next_n->next;
		}
		free(here);
	}
}
