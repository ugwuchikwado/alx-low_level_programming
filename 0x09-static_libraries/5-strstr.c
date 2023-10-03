#include "main.h"

/**
 * _strstr - locates a character in a string
 * @haystack: pointer where we search for charachter
 * @needle: character we search for
 * Return: NULL if character is not found, return pointer
 */

char *_strstr(char *haystack, char *needle)
{
	char *temp = haystack - 1;
	int lenght, count;

	for (lenght = 0; *(needle + lenght); lenght++);
		

	do {
		temp++;
		for (count = 0; count < lenght; count++)
			if (*(temp + count) != *(needle + count))
				break;
		if (count == lenght)
			return (temp);
	} while (*temp != '\0');

	return (0);
}
