#include "main.h"
#include <stdio.h>

/**
 * _memcpy - copies memory area
 * @dest: to be copied to
 * @src: to be copied from
 * @n: number of bytes to be copied
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
