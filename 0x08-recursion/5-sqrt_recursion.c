#include "main.h"
#include <stdio.h>

/**
 * _sqrt - calculates natural square root
 * @n: the number
 * @i: iterate number
 * Return: the natural square root
 */

int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
	{
		return (-1);
	}
	else if (sqrt == n)
	{
		return (i);
	}
	return (_sqrt(n, i + 1));
}

/**
 * _sqrt_recursion - finds the natural squareroot of a number
 * @n: the number
 * Return: the square root
 */

int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}
