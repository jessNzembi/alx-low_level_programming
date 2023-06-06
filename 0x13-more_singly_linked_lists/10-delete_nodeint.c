#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index
 * @head: pointer
 * @index: index of the node to be deleted
 *
 * Return: 1 if it succeeded, -1 otherwise
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp, *ptr;
	unsigned int i;

	if (!(*head))
		return (-1);
	temp = *head;
	if (index == 0)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (!temp)
			return (-1);
		temp = temp->next;
	}
	ptr = temp->next;
	temp->next = ptr->next;
	free(ptr);
	return (1);
}
