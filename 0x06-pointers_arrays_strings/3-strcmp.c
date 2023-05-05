#include "main.h"
#include <stdio.h>

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: 0 if strings are the same, -15 if otherwise
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int n = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		if (s1[i] < s2[i])
		{
			n = -15;
			break;
		}
		else if (s1[i] > s2[i])
		{
			n = 15;
			break;
		}
	}
	return n;
}
