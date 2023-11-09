#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: the input list
 * Return: the number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int i = 0;

	while (h)
	{
		h = h->next;
		i++;
	}
	return (i);
}
