#include "lists.h"

/**
 * listint_len - this function calculate the num of elements in the linkedlist
 * @h: this input list
 * Return: the number of elements
 */

size_t listint_len(const listint_t *h)
{
int i = 0;
	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
