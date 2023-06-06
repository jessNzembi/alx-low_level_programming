#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: pointer
 * @idx: index of the list where the new node should be added
 * @n: data to be added
 * Return: the address of the new node
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prev;

	if (!head)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	prev = get_nodeint_at_index(*head, idx - 1);
	if (prev == NULL)
	{
		free(new);
		return (NULL);
	}
	new->next = prev->next;
	prev->next = new;
	return (new);
}

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
