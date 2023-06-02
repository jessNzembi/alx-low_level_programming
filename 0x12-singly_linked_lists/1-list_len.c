#include "lists.h"

/**
 * list_len - treverses a list
 * @h: pointer
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		n += 1;
		h = h->next;
	}
	return (n);
}
