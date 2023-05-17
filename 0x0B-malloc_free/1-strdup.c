#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 * @str: string to duplicate
 * Return: pointer to duplicate string
 */

char *_strdup(char *str)
{
	unsigned int i, size;
	char *ptr;

	if (str == NULL)
	{
		return (NULL);
	}
	size = strlen(str) + 1;
	ptr = malloc(size);
	if (!ptr)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = str[i];
		}
	}
	return (ptr);
}
