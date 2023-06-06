#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer
 *
 * Return: the head node's data
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = (*head)->next;
	free(temp);

	return (n);
}
