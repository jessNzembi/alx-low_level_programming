#include "lists.h"

/**
 * dlistint_len - returns number of elements in a list
 * @h: pointer to the head
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *head = malloc(sizeof(dlistint_t));
	size_t count = 0;

	if (!h || !head)
		return (0);
	head = h;
	while (head)
	{
		count++;
		head = head->next;
	}
	free((void *)head);
	return (count);
}
