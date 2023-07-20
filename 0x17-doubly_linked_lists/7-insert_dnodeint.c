#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts node at given index
 * @h: pointer to the head of the list
 * @idx: the index
 * @n: data to insert
 * Return: pointer to new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *ptr, *temp;
	unsigned int count = 0;

	if (!h)
	{
		return (NULL);
	}
	if (idx == 0)
		return (add_dnodeint(h, n));
	ptr = malloc(sizeof(dlistint_t));
	if (!ptr)
		return (NULL);
	ptr->prev = NULL;
	ptr->next = NULL;
	ptr->n = n;

	temp = *h;
	while (temp)
	{
		if (count == idx)
		{
			ptr->prev = temp->prev;
			ptr->next = temp;
			temp->prev = ptr;
			if (ptr->prev)
				ptr->prev->next = ptr;
			return (ptr);
		}
		count++;
		temp = temp->next;
	}
	return (NULL);
}
