#include "main.h"

/**
 * print numbers from 0 to 14 ten times
 * Return: always 0
 */

void more_numbers(void)
{
	int i;
	int j;
	
	i = 0;
	j = 0;
	while (i < '10')
	{
		for (j = '0'; j <= '14'; j++)
		{
			_putchar(j);
		}
		_putchar('\n');
		i++;
	}
}
