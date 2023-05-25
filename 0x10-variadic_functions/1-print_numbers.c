#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"
#include <string.h>

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
		printf("%d", va_arg(ptr, int));
		if (separator != NULL && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
