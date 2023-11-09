#include "lists.h"

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: the head of the iput list
 * @n: the data of the new node
 * Return: the address of the new element, or NULL if it failed
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *here = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (here)
	{
		while (here->next)
			here = here->next;
		new->prev = here;
		here->next = new;
	}
	else
	{
		*head = new;
		new->prev = NULL;
	}

	return (new);

}
