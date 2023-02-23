#include "main.h"

/**
 * _print_numbers: print numbers from 0 to 9
 * _putchar: used only twice
 * Return: always zero
 */

void _print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i);
	}

	_putchar('\n');
}
