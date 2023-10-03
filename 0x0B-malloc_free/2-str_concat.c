#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concat two string to a newly allocated space in memory
 * @s1: string 1
 * @s2: string 2
 * Return: returns a pointer to the two strings concatenated, or NULL if fails
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	 int y, otu = 0, abuo = 0;

	if (!s1)
		s1 = "";
	else
		for (; s1[otu]; otu++)
			;
	if (!s2)
		s2 = "";
	else
		for (; s2[abuo]; abuo++)
			;
	abuo++;
	ptr = malloc(sizeof(char) * (otu + abuo));

	if (!ptr)
		return (NULL);

	for (y = 0; y <= (otu + abuo); y++)
	{
		if (y < otu)
			ptr[y] = s1[y];
		else
			ptr[y] = s2[y - otu];
	}

	return (ptr);
}
