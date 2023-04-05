#include "lists.h"

/**
 * pop_listint - pop the first value
 * @head: the list
 * Return: int value
 */

int pop_listint(listint_t **head)
{
	listint_t *new;
	int n;

		if (!*head || !head)
			return (0);

		new = *head;
		*head = (*head)->next;
		n = new->n;
		free(new);

		return (n);
}

