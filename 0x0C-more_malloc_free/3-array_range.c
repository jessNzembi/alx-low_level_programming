#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates array of integers
 * @min: min value
 * @max: max value
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int i = 0;
	int *ptr;

	if (min > max)
		return (NULL);

	ptr = malloc((sizeof(int) * (max - min)) + sizeof(int));
	if (!ptr)
		return (NULL);

	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}
	return (ptr);
}
