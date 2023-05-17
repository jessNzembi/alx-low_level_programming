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

	size = strlen(str) + 1;
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		ptr = malloc(size);
		if (sizeof(ptr) != sizeof(str))
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
	}
	return (ptr);
}
