#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at a certain index
 * @head: pointer to the head of the list
 * @index: the index
 * Return: 1 on success, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count = 0;
	dlistint_t *temp;

	if (!head || !(*head))
		return (-1);
	temp = *head;
	while (temp && count < index)
	{
		temp = temp->next;
		count++;
	}

	if (!temp)
		return (-1);

	if (index == 0)
		*head = (*head)->next;
	if (temp->prev)
		temp->prev->next = temp->next;
	if (temp->next)
		temp->next->prev = temp->prev;

	free(temp);
	return (1);
}

