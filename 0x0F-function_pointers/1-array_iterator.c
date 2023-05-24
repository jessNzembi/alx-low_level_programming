#include <stddef.h>
#include "function_pointers.h"

/**
 * array_iterator - executes function on each array elemet
 * @array: the array
 * @size: size of the array
 * @action: the function
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array)
	{
		if (size > 0)
		{
			for (i = 0; i < size; i++)
			{
				action(array[i]);
			}
		}
		else
			return;
	}
	else
	{
		return;
	}
}

