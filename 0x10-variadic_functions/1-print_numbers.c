#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints numbers
 * @separator: string to be printed between the numbers
 * @n: numbers
 * Return: void
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (n == 0)
		return;
	va_start(ptr, n);
	if (ptr == NULL)
		return;
	for (i = 0; i < n - 1; i++)
	{
		if (separator)
		{
			printf("%d%s", va_arg(ptr, int), separator);
		}
		else
			printf("%d", va_arg(ptr, int));
	}
	printf("%d", va_arg(ptr, int));
	va_end(ptr);
	printf("\n");
}
