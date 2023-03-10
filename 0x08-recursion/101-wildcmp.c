#include "main.h"


int compare(char *c1, char *c2);

/**
 * is_wild - escapes wildcard and increments string 1 if fails to match
 * @c1: string 1
 * @w: string 2
 * Return: go through string 1 until it finds a match or '\0' value is found
 */
int is_wild(char *c1, char *w)
{
	if (*c1 == '\0')
		return (compare(c1, w));
	return (compare(c1, w) || is_wild(++c1, w));
}

/**
 * compare - compare string 1 and string 2 using wildcard
 * @c1: string 1
 * @c2: string 2
 * Return: return 0 if no match return 1 if match
 */
int compare(char *c1, char *c2)
{
	if (*c1 == *c2 || *c2 == '*')
	{
		if (*c2 == '*')
			return (is_wild(c1, ++c2));
		else if (*c1 == '\0')
			return (1);
		else
			return (compare(++c1, ++c2));
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
