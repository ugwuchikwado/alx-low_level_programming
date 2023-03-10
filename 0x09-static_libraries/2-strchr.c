#include "main.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer where we search for charachter
 * @c: character we search for
 * Return: NULL if character is not found, return pointer
 */

char *_strchr(char *s, char c)
{
	char *temp = s - 1;

	do {
		temp++;
		if (*temp == c)
			return (temp);
	} while (*temp != '\0');

	return (0);
}
