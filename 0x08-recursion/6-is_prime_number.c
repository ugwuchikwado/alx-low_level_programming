#include "main.h"

/**
 * find_prime - helps prime function
 * @n: number to be checked
 * @x: checks if n is divisible by x
 * Return: 0 if not prime, 1 if prime
 */

int find_prime(int n, int x)
{
	if (x > 9)
		return (1);
	else if (n % x != 0)
		return (find_prime(n, ++x));
	return (0);
}

/**
 * is_prime_number - checks if n is prime
 * @n: number to be checked
 * Return: 0 if not prime, 1 if prime
 */

int is_prime_number(int n)
{
	if (n == 1 || n == -1 || n == 0)
		return (0);
	return (find_prime(n, 2));
}
