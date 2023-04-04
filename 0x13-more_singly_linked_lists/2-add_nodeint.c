#include "lists.h"

/**
 * add_nodeint - Adds a node at the begining of a listint_t
 * @n: data type pointer of struct
 * @head: data type pointer of the head/next node
 * Return: elements of str node_mpya
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node_mpya;

	node_mpya = malloc(sizeof(listint_t));
	if (node_mpya == NULL)
		return (NULL);

	node_mpya->n = n;
	node_mpya->next = *head;
	*head = node_mpya;

	return (new_node);
}
