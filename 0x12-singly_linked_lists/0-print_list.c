#include "lists.h"
#include <stddef.h>
#include <stdio.h>
/**
 * print_list - this function print the linked list
 * @h: the input pointer
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
size_t i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%ld] %s\n", strlen(h->str), h->str);
		i++;
		h = h->next;
	}
return (i);
}
