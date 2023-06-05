#include "lists.h"

/**
 * print_listint - prints elements of a list
 * @h: pointer
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
