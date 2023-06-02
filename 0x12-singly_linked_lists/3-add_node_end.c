#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node_end - adds a node at the end of a list
 * @head: pointer
 * @str: data
 * Return: pointer to new node
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));
	char *string = strdup(str);
	list_t *last = *head;

	new->str = string;
	new->len = strlen(string);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	if (!new)
	{
		free(new);
		return (NULL);
	}
	return (new);
}
