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
	size_t len = 0;

	while (str[len])
	{
		len++;
	}
	if (!new)
		return (NULL);

	new->str = string;
	new->len = len;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	while (last->next != NULL)
	{
		last = last->next;
	}
	last->next = new;
	return (new);
}
