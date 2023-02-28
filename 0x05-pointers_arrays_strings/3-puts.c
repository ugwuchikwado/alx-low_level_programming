#include "main.h"

/**
 * _puts - print a string
 * @str: string
 */

void _puts(char *str)
{
	int r;

	r = 0;

	while (str[r] != '\0')
	{
		_putchar(str[r]);
		r++;
	}
	_putchar('\n');	
}
