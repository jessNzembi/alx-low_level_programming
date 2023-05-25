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
	for (i = 0; i < n - 1; i++)
	{
		char *string = va_arg(ptr, char *);
		if (string[0] == '\0')
		{
			printf("(nil)%s", separator);
			continue;
		}
		printf("%s%s", string, separator);
	}
	printf("%s", va_arg(ptr, char *));
	printf("\n");
	va_end(ptr);
}
