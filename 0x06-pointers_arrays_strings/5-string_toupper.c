#include "main.h"

/**
 * string_toupper - convert to uppercase
 * @a: string in lowercase
 * Return: uppercase
 */

char *string_toupper(char *a)
{
	int j;

	for (j = 0; *(a + j) != '\0'; j++)
	{
		if (*(a + j) >= 'a' && *(a + j) <= 'z')
			*(a + j) -= 32;
	}
	return (a);
}
