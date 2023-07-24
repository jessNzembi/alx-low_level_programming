#include "main.h"

/**
 * _isdigit - checks if a character is a digit
 * @c: the number to be checked
 * Return: 1 if the character s a digit or 0 if otherwise
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

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

/**
 * _puts - prints a string
 * @s: The string to print
 * Return: empty
 */

void _puts(char *s)
{
	for (; *s != '\0'; s++)
	{
		_putchar(*s);
	}
	_putchar('\n');
}

/**
 * _strcpy - copy a string
 * @dest: Destination value
 * @src: source value
 * Return: a pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	dest[i++] = '\0';
	return (dest);
}

/**
 * _atoi - converts string to integer
 *
 * @s: pointer to a string
 *
 * Return: integer
 */

int _atoi(char *s)
{

}
