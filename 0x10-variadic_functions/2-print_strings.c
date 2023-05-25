#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: separates the strings
 * @n: number
 * Return:void
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list ptr;

	if (n == 0)
		return;
	va_start(ptr, n);
	for (i = 0; i < n; i++)
	{
		const char *string = va_arg(ptr, const char *);

		if (string == NULL)
		{
			printf("(nil)");
		}
		else
			printf("%s", string);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(ptr);
}
