#include "lists.h"

/**
 * free_listint_safe - frees a listint_t linked list
 * @head: pointer
 *
 * Return: number of nodes that were freed
 */
size_t free_listint_safe(listint_t **head)
{
	size_t n, count = 0;
	listint_t *temp;


	if (!head || !*head)
		return (0);
	while (*head)
	{
		n = (*head) - (*head)->next;
		if (n > 0)
		{
			temp = (*head)->next;
			free(*head);
			*head = temp;
			count++;
		}
		else
		{
			free(*head);
			*head = NULL;
			count++;
			break;
		}
	}
	*head = NULL;
	return (count);
}
