#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_listint_safe - Frees a listint_t linked list safely (handles loops).
 * @h: Pointer to a pointer to the head of the linked list.
 * Return: Number of nodes in the list.
 */
size_t free_listint_safe(listint_t **h)
{
    listint_t *current = *h, *temp;
    size_t count = 0;

    while (current != NULL)
    {
        count++;
        temp = current;
        current = current->next;

        /* Check if the current node is already freed */
        if (temp == current)
        {
            *h = NULL; /* Set head to NULL to avoid undefined behavior */
            return count;
        }

        free(temp);
    }

    *h = NULL; /* Set head to NULL after freeing the list */
    return count;
}

