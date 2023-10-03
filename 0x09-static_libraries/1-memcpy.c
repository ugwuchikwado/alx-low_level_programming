#include "main.h"

/**
 * _memcpy - memset function
 * @dest: start point of string to change
 * @src: value that will replace
 * @n: number of bytes to change
 * Return: changed pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *destination = dest;
	char *source = src;

	for (; n != 0; destination++, n--, source++)
		*destination = *source;
	return (dest);
}
