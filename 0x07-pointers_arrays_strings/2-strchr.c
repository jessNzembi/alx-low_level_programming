#include "main.h"
#include <stdio.h>

/**
 * _strchr - locates a character in a string
 * @s: string to be checket
 * @c: character to be located
 * Return: pointer to the first occurrence of the character or null
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (NULL);
}
