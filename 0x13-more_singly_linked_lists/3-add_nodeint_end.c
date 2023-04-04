#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the begining of a listint_t
 * @head: pointer to first node
 * @n: data type pointer of struct
 * Return: elements of the str new_node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *tmp_node;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
	}
	else
	{
		tmp_node = *head;
		while (tmp_node->next != NULL)
			tmp_node = tmp_node->next;
		tmp_node->next - new;
	}
	return (new);
}


