#include "main.h"

/**
 * set_bit - sets bit to 1 at a given index
 * @n: number
 * @index: index starting from 0
 * Return: 1 if it worked, or -1 otherwise
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
