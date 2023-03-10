#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 * Return: size difference of strings
 */

int _strcmp(char *s1, char *s2)
{
	int count_no = 0;

	while (*(s1 + count_no) != '\0' || *(s2 + count_no) != '\0')
	{
		if (*(s1 + count_no) != *(s2 + count_no))
			return (*(s1 + count_no) - *(s2 + count_no));
		count_no++;
	}
	return (0);
}
