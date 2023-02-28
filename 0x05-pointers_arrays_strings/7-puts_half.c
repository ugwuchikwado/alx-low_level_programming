#include "main.h"

/**
 * puts_half - prints half a string
 * @str: string
 */

void puts_half(char *str)
{
	int r, half;

	r = 0;

	while (str[r] != '\0')
		r++;
	half = (r) / 2;
	if (r % 2 != 0)
		half = ((r - 1) / 2) + 1;
	for (; half < r; half++)
		_putchar(str[half]);
	_putchar('\n');
}
