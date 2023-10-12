#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: string to be printed between numbers
 * @n: number of parameters
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int y;

	va_start(valist, n);

	for (y = 0; y < n; y++)
	{
		printf("%d", va_arg(valist, int));
		if (separator && y != n - 1)
			printf("%s", separator);
	}
	printf("\n");

	va_end(valist);
}
