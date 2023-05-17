#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to resulting string
 */

char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, k = 0, l = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[i])
	{
		i++;
	}
	while (s2[j])
	{
		j++;
	}
	l = i + j;
	ptr = malloc((sizeof(char) * l) + 1);
	if (!ptr)
	{
		return (NULL);
	}
	j = 0;
	while (k < l)
	{
		if (k <= i)
		{
			ptr[k] = s1[k];
		}
		if (k >= i)
		{
			ptr[k] = s2[j];
			j++;
		}
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
