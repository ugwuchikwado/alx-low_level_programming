#include "main.h"
#include <stdio>

/**
 * print 1 too 100
 * print fizz at every multiples of 3
 * print buzz at every multiples of 5
 * print fizzbuzz at every multiples of the product of 3 and 5
 * Return: always zero
 */

int main(void)
{
	int i;
	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("fizzbuzz");
			printf(' ');
			continue;
		}
		else if(i % 5 == 0)
		{
			printf("buzz");
			printf(' ');
			continue;
		}
		else if(i % 3 == 0)
		{
			printf("fizz");
			printf(' ');
			continue;
		}
		printf("%d",i);

	}
	return (0);
}
