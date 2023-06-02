#include "lists.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_list - prints a list
 * @h: pointer
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t n = 0;

	while (h != NULL)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
			h = h->next;
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
			h = h->next;
		}
		n += 1;
	}
	return (n);
}
