#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * list_len - prints the lenght of a list
 *
 * @h : linked list
 *
 * Return : the lenght of a list
 *
 */

size_t list_len(const list_t *h)
{
	size_t count = 0;

	while(h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}
