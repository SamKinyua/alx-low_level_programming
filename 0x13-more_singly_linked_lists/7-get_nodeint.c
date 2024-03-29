#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: head of the list
 * deint.c7-get_nodeint.c
 * @index: index of the node starting at 0
 *
 * Return: pointer to the nth node/Null if node is nonexistent
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head)
	{
		if (i++ == index)
			return (head);
		head = head->next;
	}

	return (NULL);
}
