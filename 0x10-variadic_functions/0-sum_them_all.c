#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - adds all of its parameters
 * @n: first parameter
 * Return: the sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	va_list ptr;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);
	}
	va_end(ptr);
	return (sum);
}
