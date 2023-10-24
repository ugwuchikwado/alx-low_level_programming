#include <stdlib.h>
#include <stddef.h>
#include <stdio.h>
#include "lists.h"


/**
 * print_listint_safe - Prints a listint_t linked list safely (handles loops).
 * @head: Pointer to the head of the linked list.
 * Return: Number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
    const listint_t *slow, *fast;
    size_t count = 0;

    slow = head;
    fast = head;

    while (slow && fast && fast->next)
    {
        printf("[%p] %d\n", (void *)slow, slow->n);
        slow = slow->next;
        fast = fast->next->next;

        count++;

        /* If there is a loop, break the loop */
        if (slow == fast)
        {
            printf("-> [%p] %d\n", (void *)slow, slow->n);
            break;
        }
    }

    /* Handle the case where there is a loop */
    if (slow == fast)
    {
        slow = head;
        while (slow != fast)
        {
            printf("[%p] %d\n", (void *)slow, slow->n);
            slow = slow->next;
            fast = fast->next;

            count++;
        }
        printf("-> [%p] %d\n", (void *)slow, slow->n);
    }

    return count;
}

