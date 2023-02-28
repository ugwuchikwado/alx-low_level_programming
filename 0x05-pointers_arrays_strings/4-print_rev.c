#include "main.h"

/**
 * print_rev - print a string in reverse followed by a new line
 * @s: string to be reversed
 */

void print_rev(char *s)
{
	int r;

	r = 0;

	while (s[r] != '\0')
		r++;
	r--;
	while (r >= 0)
	{
		_putchar(s[r]);
		r--;
	}
	_putchar('\n');
}
