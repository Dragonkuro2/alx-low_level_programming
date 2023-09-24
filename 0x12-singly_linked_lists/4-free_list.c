#include "lists.h"

/**
 * free_list - this function free the memory for the input list
 * @head: the input list
 */

void free_list(list_t *head)
{
list_t *current;
	while (head != NULL)
	{
		current =head;
		head = head->next;
		if (current->str != NULL)
			free(current->str);
		free(current);
	}
}
