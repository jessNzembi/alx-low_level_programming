#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints anything
 * @format: list of types of arguments
 * Return: void
 */

void print_all(const char * const format, ...)
{
	int j = 0;
	char *s;
	va_list ptr;

	va_start(ptr, format);
	while (format && format[j])
	{
		switch (format[j])
		{
			case 'c':
				printf("%c", (char)va_arg(ptr, int));
				break;
			case 'i':
				printf("%d", va_arg(ptr, int));
				break;
			case 'f':
				printf("%f", (float)va_arg(ptr, double));
				break;
			case 's':
				s = va_arg(ptr, char *);
				if (s == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", s);
				break;
			default:
				break;
		}
		if ((format[j + 1]) && (format[j] == 'c' || format[j] == 'i' ||
					format[j] == 'f' || format[j] == 's'))
			printf(",");
		j++;
	}
		printf("\n");
		va_end(ptr);
}
