#include "main.h"
#include <stdio.h>

/**
 * _strcat - concatenates two strings
 * @dest: pointer to first string
 * @src: pointer to second string
 * Return: pointer to resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	do {
		dest++;
		i++;
	}
	while (dest[i] != '\0');
	
	while (src[j] != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		j++;
	}
	return (dest);
}
