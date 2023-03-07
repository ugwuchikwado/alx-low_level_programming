#include "main.h"

/**
 * _strpbrk - locates a character in a string
 * @s: pointer where we search for charachter
 * @accept: character we search for
 * Return: NULL if character is not found, return pointer
 */

char *_strpbrk(char *s, char *accept)
{
	char *temp = s - 1;
	int j;

	do {
		temp++;
		for (j = 0; *(accept + j) != '\0'; j++)
			if (*temp == *(accept + j))
				return (temp);
	} while (*temp != '\0');

	return (0);
}
