#include "main.h"


int compare(char *v1, char *v2);

/**
 * is_wild - escapes wildcard and increments string 1 if fails to match
 * @v1: string 1
 * @w: string 2
 * Return: go through string 1 until it finds a match or '\0' value is found
 */
int is_wild(char *v1, char *w)
{
	if (*v1 == '\0')
		return (compare(v1, w));
	return (compare(v1, w) || is_wild(++v1, w));
}

/**
 * compare - compare string 1 and string 2 using wildcard
 * @v1: string 1
 * @v2: string 2
 * Return: return 0 if no match return 1 if match
 */
int compare(char *v1, char *v2)
{
	if (*v1 == *v2 || *v2 == '*')
	{
		if (*v2 == '*')
			return (is_wild(v1, ++v2));
		else if (*v1 == '\0')
			return (1);
		else
			return (compare(++v1, ++v2));
	}
	return (0);
}

/**
 * wildcmp - compare string 1 and string 2 using wildcard
 * @s1: string 1
 * @s2: string 2
 * Return: return 0 if no match return 1 if match
 */
int wildcmp(char *s1, char *s2)
{
	return (compare(s1, s2));
}
