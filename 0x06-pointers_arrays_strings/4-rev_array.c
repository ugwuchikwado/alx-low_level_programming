#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: int array to reverse
 * @n: number of elements in the array
 * Return: concatenated string
 */

void reverse_array(int *a, int n)
{
	int *start = a;
	int *end;
	int temp = 0;

	end = a + n - 1;
	for (; start < end; start++, end--)
	{
		temp = *end;
		*end = *temp;
		*start = temp;
	}
}
