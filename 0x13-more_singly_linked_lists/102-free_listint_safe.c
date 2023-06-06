#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 * @head: pointer
 *
 * Return: number of nodes that were freed
 */
size_t free_listint_safe(listint_t **head)
{
	size_t count = 0;
	listint_t *current, *temp;


	if (!head || !*head)
		return (0);

	current = *head;
	*head = NULL;

	while (current)
	{
		count++;
		temp = current;
		current = current->next;
		free(temp);
		if (temp <= current)
			break;
	}

	return (count);
}
