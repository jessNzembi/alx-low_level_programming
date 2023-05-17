#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid - creates 2d array of integers
 * @width: width
 * @height: height
 * Return: pointer to the array
 */

int **alloc_grid(int width, int height)
{
	int i, j, k, l;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * height);

	if (!ptr)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = malloc(sizeof(int) * width);
		if (ptr[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
	}
	for (k = 0; k < height; k++)
	{
		for (l = 0; l < width; l++)
		{
			ptr[k][l] = 0;
		}
	}
	return (ptr);
}
