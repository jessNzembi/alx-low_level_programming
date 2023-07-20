#include "lists.h"

/**
 * add_dnodeint_end - adds node at end
 * @head: pointer to the head of the list
 * @n: data to add
 * Return: address of new element or null
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *ptr;
	dlistint_t *temp;

	if (!head)
		return (NULL);
	ptr = malloc(sizeof(dlistint_t));

	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;
	ptr->prev = NULL;

	if (*head)
	{
		temp = malloc(sizeof(dlistint_t));
		if (!temp)
			return (NULL);
		temp = *head;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = ptr;
		ptr->prev = temp;
	}
	else
	{
		*head = ptr;
	}
	return (ptr);
}
