#include "lists.h"

/**
 * add_dnodeint - adds node at beginning
 * @head: pointer to the head of the list
 * @n: data to add
 * Return: address of new element or null
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *ptr;

	if (!head)
		return (NULL);

	ptr = malloc(sizeof(dlistint_t));

	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->prev = NULL;
	ptr->next = NULL;

	if (*head)
	{
		ptr->next = *head;
		(*head)->prev = ptr;
	}

	*head = ptr;
	return (ptr);
}
