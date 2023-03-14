#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - copy the string given to a newly allocated space in memory
 * @str: string to copy
 * Return: returns a pointer to the copy, or NULL if it fails
 */

char *_strdup(char *str)
{
	char *ptr;
	 int y, lenght;

	if (!str)
		return (NULL);

	for (lenght = 0; str[lenght]; lenght++)
		;
	lenght++;
	ptr = malloc(sizeof(char) * lenght);

	if (!ptr)
		return (NULL);

	for (y = 0; y <= lenght; y++)
		ptr[y] = str[y];

	return (ptr);
}
