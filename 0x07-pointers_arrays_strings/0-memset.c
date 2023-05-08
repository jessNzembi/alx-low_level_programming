#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory with constant byte
 * @s: pointer to memory space
 * @b: the constant byte
 * @n: size to be filled
 * Return: pointer to the memory space
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
