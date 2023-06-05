#include "lists.h"

/**
 * add_nodeint_end - adds new node at the end
 * @head: pointer
 * @n: data
 * Return: pointer to new node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));
	listint_t *last = *head;

	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (!(*head))
	{
		*head = new;
		return (*head);
	}
	while (last->next)
	{
		last = last->next;
	}
	last->next = new;
	return (*head);
}

