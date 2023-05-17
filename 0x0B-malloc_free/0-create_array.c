#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of characters
 * @size: the size of the array
 * @c: char to initialize the array
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;
	ptr = malloc(size * sizeof(char));

	if (ptr != NULL)
	{
		if (size == 0)
		{
			return (NULL);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				ptr[i] = c;
			}
		}
		return (ptr);
	}
	else
	{
		return (NULL);
	}
	return (ptr);
}
