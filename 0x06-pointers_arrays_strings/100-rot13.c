#include "main.h"
#include <stdio.h>

/**
 * rot13 - encodes a string using rot13
 * @a: string to encode
 * Return: encode to rot13
 */

char *rot13(char *a)
{
	int i, x, temp;
	char ch[] = "AaZz";
	char nth[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(a + i) != '\0'; i++)
		for (x = 0; x < 2; x++)
		{
			if (*(a + i) >= ch[x] && *(a + i) <= ch[x + 2])
			{
				temp = (*(a + i) - 65 - (x * 32));
				*(a + i) = (nth[temp] + (x * 32));
			}
		}
	return (a);
}
