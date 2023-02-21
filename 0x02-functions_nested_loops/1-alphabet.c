#include "main.h"

/**
 * print_alphabet - prints out the alphabet
 * main - uses built in function
 * Return: 0 if succesful
 */

void print_alphabet(void)
{
	char n;
	for (n = 'a'; n <= 'z'; n++)
	{
		_putchar(n);
	}

	_putchar('\n');
}
