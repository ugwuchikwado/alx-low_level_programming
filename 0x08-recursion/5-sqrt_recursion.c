#include "main.h"

/**
 *find_sqrt - helps sqrt function find sqrt
 * @n: needs to be sqrt
 * @x: sqrt of n
 * Return: natural sqrt of n
 */

int find_sqrt(int n, int x)
{
	if (x * x == n)
		return (x);
	else if (x * x < n)
		return (find_sqrt(n, ++x));
	return (-1);
}

/**
 * _sqrt_recursion - get the natural sqrt of n
 * @n: integer
 * Return: natural sqrt of n
 */

int _sqrt_recursion(int n)
{
	return (find_sqrt(n, 0));
}
