#include "main.h"

/**
 * print_alphabet_x10 - prints out the alphabet
 * main - uses built in function
 * Return: 0 if succesful
 */

void print_alphabet_x10(void)
{
	char n;
	int i;

	while (i < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}

		_putchar('\n');
		i++;
	}
}
