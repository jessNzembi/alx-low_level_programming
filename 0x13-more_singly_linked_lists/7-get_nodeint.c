#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node
 * @head: pointer
 * @index: n
 * Return: pointer to nth node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = head;
	unsigned int count = 0;

	while (ptr)
	{
		if (count == index)
			return (ptr);
		count++;
		ptr = ptr->next;
	}
	return (NULL);
}
