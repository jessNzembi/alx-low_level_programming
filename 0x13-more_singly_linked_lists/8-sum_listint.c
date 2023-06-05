#include "lists.h"

/**
 * sum_listint - returns sum of data
 * @head: pointer
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
