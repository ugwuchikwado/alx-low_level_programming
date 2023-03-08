#include "main.h"

/**
 * _puts_recursion - prints a string, followed by a new line
 * @s: pointer to a string
 */

void _puts_recursion(char *s)
{
	char *nkpuru = s;

	if (*nkpuru != '\0')
	{
		_putchar(*nkpuru);
	nkpuru++;
		_puts_recursion(nkpuru);
	}
	else
		_putchar('\n');
}
