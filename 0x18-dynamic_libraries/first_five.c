#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: the character to print
 * Return: on success 1.
 * On error, -1 is returned and errno is set appropriately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * _islower - checks for lowercase character
 * @c: The character to be checked
 * Return: 1 for lowercase character or 0 for anything else
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}

/**
 * _isalpha - Checks for alphabetic characters
 * @c: The character to be checked
 * Return: 1 for alphabetic characters or 0 for anything else
 */

int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}

/**
 * _abs - Captures the absolute value of an integer
 * @c: The number to be captured
 * Return: Absolute value of number or zero
 */

int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}

/**
 * _isupper - checks if a letter is upper
 * @c: the number to be checked
 * Return: 1 for upper letter or 0 for anything else
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
