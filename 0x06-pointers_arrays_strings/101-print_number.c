#include "main.h"

/**
 * print_number - print any integer using putchar
 * @n: integer to be printed
 */

void print_number(int n)
{
	int ct, y, k;

	y = 1000000000;

	if (n == 0)
		_putchar('0');
	else if (n > 0)
		n *= -1;
	else
		_putchar('-');
	for (ct = 0; ct < 10; ct++, y /= 10)
	{
		if (n / y == 0)
			continue;
		else
		{
			k = (-(n / y) % 10);
			if (k < 0)
				k *= -1;
			_putchar(k + '0');
		}
	}
}
