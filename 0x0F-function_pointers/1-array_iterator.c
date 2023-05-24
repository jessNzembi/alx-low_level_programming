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
	long unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
