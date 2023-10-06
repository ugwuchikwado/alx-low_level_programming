#include <stdlib.h>
#include <stdio.h>

/**
 * string_nconcat - concat two strings to n bytes
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to concat of string 2
 * Return: pointer to concatenated string or NULL if it fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, lenght1, lenght2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (lenght1 = 0; *(s1 + lenght1); lenght1++)
		;
	for (lenght2 = 0; *(s2 + lenght2); lenght2++)
		;

	if (lenght2 < n)
		n = lenght2;

	ptr = malloc((lenght1 + n + 1) * sizeof(char));

	if (!ptr)
		return (NULL);

	for (i = 0; i < (lenght1 + n); i++)
	{
		if (i < lenght1)
			ptr[i] = s1[i];
		else
			ptr[i] = s2[i - lenght1];
	}
	ptr[i] = '\0';

	return (ptr);
}
