#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a node at the begining
 * @head: pointer
 * @str: data to be added
 * Return: pointer to added node
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new = (list_t *)malloc(sizeof(list_t));
	char *string = strdup(str);
	size_t len = 0;

	while (str[len])
	{
		len++;
	}
	if (!new)
		return (NULL);

	new->str = string;
	new->len = len;
	new->next = *head;
	*head = new;

	return (*head);
}
