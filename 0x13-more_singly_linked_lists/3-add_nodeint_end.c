#include "lists.h"

/**
 * add_nodeint_end - Adds a node at the begining of a listint_t
 * @head: pointer to first node
 * @n: data type pointer of struct
 * Return: elements of the str new_node
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, **ptr;

	new = mallo(sizeof(listint_t));
		if (!new)
		{
		return (NULL);
		}
		new->n = n;
		new->nex = NULL;
		ptr = head;

			if (*ptr == NULL)
			{
				*ptr = new;
			}
			else
			{
				while (*ptr)
				{
					ptr = &(*ptr)->next;
				}
				(*ptr) = new;
			}
			return (new);
}


