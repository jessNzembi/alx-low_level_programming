#include "lists.h"

/**
 * print_dlistint - prints the elements of a doubly linked list
 * @h: pointer to the head
 * Return: number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *head;
	size_t count = 0;

	if (!h)
		return (0);
	head = h;
	while (head)
	{
		printf("%d\n", head->n);
		count++;
		head = head->next;
	}
	return (count);
}
