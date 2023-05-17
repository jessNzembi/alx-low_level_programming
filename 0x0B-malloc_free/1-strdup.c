#include "main.h"
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

	size = sizeof(str);

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(size);
		for (i = 0; i < size; i++)
		{
			ptr[i] = str[i];
		}
	}
	return (ptr);
}
