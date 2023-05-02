#include <stdio.h>

/**
 * _strlen - returns the length of a string
 * @s: the string to get length of
 * Return: the length of the string
 */

int _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
	{
		length++;
	}
	return (length);
}
