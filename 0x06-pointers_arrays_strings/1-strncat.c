#include "main.h"
#include <stdio.h>

/**
 * _strncat - concatenates two strings
 * @src: first string
 * @dest: second string
 * @n: number of bytes to get
 * Return: pointer to resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while(dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n; j++)
	{
		dest[i] = src[j];
		i++;
	}
	return (dest);
}
