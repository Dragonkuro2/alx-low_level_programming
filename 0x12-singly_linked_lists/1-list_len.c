#include "lists.h"

/**
 * list_len - this function return the number of elemnts in the list_t
 * @h: the input pointer
 * Return: the number of elements in list_t
 */

size_t list_len(const list_t *h)
{
int i = 0;
	while (h != NULL)
	{
		i++;
		h = h->next;
	}
return (i);
}
