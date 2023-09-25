#include "lists.h"

/**
 * get_nodeint_at_index - this function returns the nth node of a listint_t
 * @head: the input list
 * @index: the index of the elemenet
 * Return: the element of the index
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
size_t i = 0;
listint_t *node, *tmp;
	if (head == NULL)
		return (NULL);
	node = head;
	for (; i <= index; i++)
	{
		if (head == NULL)
			return (NULL);
		else
		{
			head = head->next;
		}
	}
	tmp = head;
	head = node;
	return (tmp);
}
