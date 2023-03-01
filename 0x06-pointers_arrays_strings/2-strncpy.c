#include "main.h"

/**
 * _strncpy - copy two strings only taking n bytes from src
 * @dest: first string to be added to
 * @src: second string to be added
 * @n: number of bites to use from src
 * Return: concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	char *p = dest;

	for (; n != 0 && *src != '\0'; n--, src++)
	{
		*p = *src;
		p++;
	}
	for (; n != 0 && *p != '\0'; n--, p++)
		*p = '\0';
	return (dest);
}
