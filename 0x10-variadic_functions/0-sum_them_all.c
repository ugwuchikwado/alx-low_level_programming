#include <stdarg.h>

/**
 * sum_them_all - sum of all its parameters
 * @n: number of parameters
 * Return: 0 if n = 0 or sum of parameters if succesful
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	int sum = 0;
	unsigned int y;

	if (!n)
		return (0);

	va_start(valist, n);

	for (y = 0; y < n; y++)
		sum += va_arg(valist, int);

	va_end(valist);

	return (sum);
}
