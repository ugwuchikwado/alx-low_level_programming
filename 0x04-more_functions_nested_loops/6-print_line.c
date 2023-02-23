#include "main.h"

/**
 * print a straight line'
 * print newline if n is 0
 * print newline if n is less than 0
 * Return: always 0
 */

void print_line(n)
{
	for (; n > 0; n--)
	{
		_putchar('_');
	}
	_putchar('\n');
}
