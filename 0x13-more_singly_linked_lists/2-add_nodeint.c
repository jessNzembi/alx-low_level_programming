#include "lists.h"

/**
 * add_nodeint - adds a node at the beggining of a list
 * @head: pointer
 * @n: data to add
 * Return: pointer to the new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = (listint_t *)malloc(sizeof(listint_t));

	if (!new)
		return (NULL);
	new->n = n;
	new->next = (*head);
	(*head) = new;
	return (*head);
}
