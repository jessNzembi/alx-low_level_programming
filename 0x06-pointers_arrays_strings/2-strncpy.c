#include "main.h"
#include <stdio.h>

/**
 * _strncpy - copies a string
 * @dest: the destination string
 * @src: the source string
 * @n: number of characters to be copied
 * Return: pointer to thefinal string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}	
