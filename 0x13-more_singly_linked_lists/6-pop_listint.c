#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t list
 * @head: pointer to first node
 *
 * Return: data in @head
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
