#include <stddef.h>
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"


listint_t *find_listint_loop(listint_t *head) {
    listint_t *slow = head, *fast = head;

    /* Check if there is a loop */
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
        if (slow == fast) {
            break;  /* Loop detected */
        }
    }

    /* If no loop */
    if (fast == NULL || fast->next == NULL) {
        return NULL;
    }

    /* Move slow pointer to the head and advance both pointers one step at a time until they meet */
    slow = head;
    while (slow != fast) {
        slow = slow->next;
        fast = fast->next;
    }

    /* Now slow and fast pointers meet at the start of the loop */
    return slow;
}

