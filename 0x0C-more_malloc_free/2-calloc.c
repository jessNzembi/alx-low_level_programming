#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array
 * @nmemb: no. of elements
 * @size: size of the array
 * Return: void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, l = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	l = nmemb * size;
	ptr = malloc(l);
	if (!ptr)
		return (NULL);

	while (i < l)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
