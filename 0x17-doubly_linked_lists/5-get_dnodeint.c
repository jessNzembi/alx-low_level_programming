#include "lists.h"

/**
 * get_dnodeint_at_index - returns node at an index
 * @head: pointer to the head
 * @index: the index
 * Return: pointer to the node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int count = 0;

	if (!head)
		return (NULL);
	ptr = head;
	while (ptr)
	{
		if (count == index)
			return (ptr);
		count++;
		ptr = ptr->next;
	}
	return (NULL);
}
