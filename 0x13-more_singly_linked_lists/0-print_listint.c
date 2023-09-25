#include "lists.h"

/**
 * print_listint - this function prints all the nodes of the list
 * @h: the input list
 * Return: it return the number of nodes
 */

size_t print_listint(const listint_t *h)
{
int i = 0;
	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		i++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
