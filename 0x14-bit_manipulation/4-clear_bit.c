#include "main.h"

/**
 * clear_bit - sets bit value to 0 at given index
 * @n: number
 * @index: index starting from 0
 * Return: 1 if it worked, -1 otherwise
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
