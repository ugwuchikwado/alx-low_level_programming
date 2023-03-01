#include "main.h"

/**
 * _strncat - concatenates two strings only taking n bytes from src
 * @dest: first string to be added to
 * @src: second string to be added
 * @n: number of bites to use from src
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *tp = dest;

	for (; *tp != '\0'; tp++)
		;
	for (; *src != '\0'; src++)
	{
		if (n == 0)
			break;
		*tp = *src;
		tp++;
		n--;
	}
	return (dest);
}
