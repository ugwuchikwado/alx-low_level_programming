#include "main.h"

/**
 * print diagonal line
 * @n: number to be printed
 * return: 0 always
 */

void print_diagonal(int n)
{
	int x;
	int j;

if (n <= 0)
    _putchar('\n');
for (y = 0; y < n; y++)
{
    for (x = y; x > 0; x--) {
        _putchar(' ');
    }
    _putchar('*');
    _putchar('\n');
}
}
