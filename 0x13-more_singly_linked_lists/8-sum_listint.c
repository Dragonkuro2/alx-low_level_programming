#include "lists.h"

/**
 * sum_listint - this function calculate the sum of all the element of the list
 * @head: the input list
 * Return: the sum
 */

int sum_listint(listint_t *head)
{
int sum = 0;
	if (head == NULL)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
