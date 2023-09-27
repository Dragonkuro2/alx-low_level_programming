#include "lists.h"

/**
 * find_listint_loop - this function finds the loop in a linked list
 * @head: the input list
 * Return: The address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *node, *tmp;

	if (head == NULL)
		return (NULL);
	for (tmp = head->next; tmp != NULL; tmp = tmp->next)
	{
		if (tmp == tmp->next)
			return (tmp);
		for (node = head; node != tmp; node = node->next)
			if (node == tmp->next)
				return (tmp->next);
	}
	return (NULL);
}
