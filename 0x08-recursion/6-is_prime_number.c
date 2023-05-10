#include "main.h"
#include <stdio.h>

int check_prime(int n, int i);

/**
 * is_prime_number - checks if number is prime
 * @n: the number
 * Return: 1 if prime, 0 if not
 */

int is_prime_number(int n)
{
	return (check_prime(n, 1));
}

/**
 * check_prime - checks if a number is prime
 * @n: the number
 * @i: iteration time
 * Return: 1 if prime, else 0
 */

int check_prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	else if (n % i == 0 && i > 1)
	{
		return (0);
	}
	else if ((n / i) < i)
	{
		return (1);
	}
	return (check_prime(n, i + 1));
}
