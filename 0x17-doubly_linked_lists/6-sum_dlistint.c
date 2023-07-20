#include "lists.h"

/**
 * sum_dlistint - returns sum of all data in a list
 * @head: pointer to the head
 * Return: the sum
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *ptr;

	if (!head)
		return (0);
	ptr = head;
	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}
	return (sum);
}
