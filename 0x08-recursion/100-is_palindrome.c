#include "main.h"

/**
 * get_length - gets length of string
 * @str: pointer to a string
 * @len: length of a string
 * Return: return length of string
 */
int get_length(char *str, int len)
{
	if (*(str + len) != '\0')
	{
		return (get_length(str, ++len));
	}
	return (--len);
}
/**
 * find_palindrom - gets length of string
 * @p: pointer to a string
 * @q: length of a string
 * @len: length of a string
 * Return: return 0 if its not palindrome return 1 if it is
 */
int find_palindrom(char *p, char *q, int len)
{
	if (*p == *(q + len) && len > 1)
	{
		p++;
		return (find_palindrom(p, q, --len));
	}
	if (len == 1)
		return (1);
	return (0);
}
/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to a string
 * Return: return 0 if its not palindrome return 1 if it is
 */
int is_palindrome(char *s)
{
	return (find_palindrom(s, s, get_length(s, 0)));
}
