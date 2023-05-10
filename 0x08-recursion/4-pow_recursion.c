#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns x raised to power y
 * @x: variable input
 * @y: variable input
 * Return: x raised to power y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
