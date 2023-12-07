#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * delete_dnodeint_at_index - ...
  * @head: ...
  * @index: ...
  *
  * Return: ...
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = NULL, *temp = NULL;
	unsigned int len = 0;

	if (head && *head)
	{
		len = dlistint_len(*head);
		if (index > len)
			return (-1);

		if (index == 0)
			return (delete_first_dnode(head));

		current = get_dnodeint_at_index(*head, index);
		if (current)
		{
			temp = current;
			if (len - 1 == index)
				current->prev->next = current->next;
			else
			{
				current->prev->next = current->next;
				current->next->prev = current->prev;
			}

			free(temp);
			return (1);
		}
	}

	return (-1);
}

/**
  * delete_first_dnode - Remove the first node of a doubly linked list
  * @head: The head of the doubly linked list
  *
  * Return: 1 if is deleted
  */
int delete_first_dnode(dlistint_t **head)
{
	dlistint_t *current = *head, *temp = NULL;

	temp = current;
	if (current->next)
	{
		current = current->next;
		current->prev = temp->prev;
		*head = current;
	}
	else
	{
		*head = NULL;
	}

	free(temp);
	return (1);
}

/**
  * get_dnodeint_at_index - Gets a node from a doubly linked list
  * @head: The head of the doubly linked list
  * @index: The index to find in the doubly linked list
  *
  * Return: The specific node of the doubly linked list
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *current = head;
	unsigned int number = 0;

	if (head)
	{
		while (current != NULL)
		{
			if (number == index)
				return (current);

			current = current->next;
			++number;
		}
	}

	return (NULL);
}

/**
  * dlistint_len - Counts the number of elements in a doubly linked list
  * @h: The double linked list to count
  *
  * Return: Number of elements in the doubly linked list
  */
size_t dlistint_len(const dlistint_t *h)
{
	int len = 0;

	while (h != NULL)
	{
		++len;
		h = h->next;
	}

	return (len);
}

