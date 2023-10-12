#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings
 * @separator: to be printed between the strings
 * @n: number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int y;
	char *arg;

	va_start(valist, n);

	for (y = 0; y < n; y++)
	{
		arg = va_arg(valist, char *);
		if (arg)
			printf("%s", arg);
		else
			printf("%p", arg);
		if (separator && y < n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(valist);
}
