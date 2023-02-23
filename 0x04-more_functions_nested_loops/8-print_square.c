#include "main.h"

/**
 * print a square using #
 * @n: identity to be printed
 * Return: always zero
 */

void print_square(int n)
{
	int x;
	int y;

	if (n <= 0)
    _putchar('\n');
for (y = 0; y < n; y++)
{
    for (x = 0; x <= n; x++) {
        _putchar('#');
    }

    _putchar('\n');
}
}
