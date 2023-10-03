#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: first string to be added to
 * @src: second string to be added
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	char *t = dest;

	for (; *t != '\0'; t++)
		;
	for (; *src != '\0'; src++)
	{
		*t = *src;
		t++;
	}
	*t = *src;
	return (dest);
}
