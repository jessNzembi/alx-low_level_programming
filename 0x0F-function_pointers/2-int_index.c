#include "function_pointers.h"
#include <stdio.h>

/**
 * int_index - searches for an integer
 * @array: where to search
 * @size: size of the array
 * @cmp: finction
 * Return: index of integer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (array)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
		{
			result = cmp(array[i]);
			if (result != 0)
				break;
		}
		if (result == 0)
			return (-1);
	}
	else
	{
		return (-1);
	}
	return (i);
}

